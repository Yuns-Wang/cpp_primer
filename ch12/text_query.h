#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>
#include <iostream>
#include <memory>

#include "query_result.h"

using std::cout;
using std::end;
using std::string;
using std::vector;
using std::map;
using std::set;
using std::ifstream;
using std::istringstream;
using std::shared_ptr;
using std::make_shared;

class TextQuery
{
public:
    TextQuery(){}
    TextQuery(ifstream &);
    QueryResult query(const string) const;

    shared_ptr<vector<string>> get_fc() const
    {
        return fc_shared;
    }
    shared_ptr<map<string,set<int>>> get_rl() const
    {
        return rl_shared;
    }
    shared_ptr<map<string, int>> get_rc() const
    {
        return rc_shared;
    }
private:
    vector<string> file_contents;
    map<string, set<int>> results_lines;
    map<string, int> results_counts;

    shared_ptr<vector<string>> fc_shared;
    shared_ptr<map<string,set<int>>> rl_shared;
    shared_ptr<map<string, int>> rc_shared;
};

TextQuery::TextQuery(ifstream & ifs)
{
    string one_line;
    int line_num = 0;
    while(getline(ifs, one_line))
    {
        //file_contets
        file_contents.push_back(one_line);
        //results_lines and results_counts
        ++line_num;
        istringstream iss(one_line);
        string one_word;
        while(iss >> one_word)
        {
            //results_lines
            results_lines[one_word].insert(line_num);
            //results_counts
            ++results_counts[one_word];
        }
    }

    fc_shared = make_shared<vector<string>>(file_contents);
    rl_shared = make_shared<map<string,set<int>>>(results_lines);
    rc_shared = make_shared<map<string, int>>(results_counts);

}

QueryResult TextQuery::query(const string search_word) const
{
    QueryResult result(get_fc(), get_rl(), get_rc(), search_word);
    return result;
}

#endif // TEXT_QUERY_H
