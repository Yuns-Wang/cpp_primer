#include <sstream>
#include "text_query.h"

using std::ifstream;
using std::ostream;
using std::string;
using std::vector;
using std::set;
using std::istringstream;
using std::shared_ptr;

TextQuery::TextQuery(ifstream& ifs)
{
    string line;
    string word;
    line_no n{0};
    while (getline(ifs, line))
    {
        file.push_back(line);
        ++n;
        istringstream iss(line);
        while (iss >> word)
        {
            auto &line_no_set = results[word];
            if (!line_no_set)
            {
                line_no_set.reset(new set<line_no>);
            }
            line_no_set->insert(n);
        }
    }
}

QueryResult TextQuery::query(const string& seek_word) const
{
    static shared_ptr<set<line_no>> no_data(new set<line_no>);
    auto loc = results.find(seek_word);
    if (loc == results.end())
    {
        return QueryResult(seek_word, file, no_data);
    } else {
        return QueryResult(seek_word, file, loc->second);
    }
}

QueryResult::QueryResult(string sought_word, StrBlob file_blob, shared_ptr<set<TextQuery::line_no>> lines_ptr)
    :sought(sought_word), file(file_blob), lines(lines_ptr){}

ostream &print(ostream &os, const QueryResult &qr)
{
    os << qr.sought << " occurs " << qr.lines->size() << " times:" << std::endl;
    for(auto n : *(qr.lines))
    {
        os << "(line " << n << ") " << qr.file.at(n) << std::endl;
        //os << "(line " << n << ") " << *(qr.file->begin() + n - 1) << std::endl;
    }
    return os;
}
