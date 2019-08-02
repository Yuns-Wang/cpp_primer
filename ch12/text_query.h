#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <memory>

#include "query_result.h"

using std::string;
using std::vector;
using std::map;
using std::set;
using std::ifstream;
using std::shared_ptr;
using std::make_shared;

class TextQuery
{
public:
    TextQuery(){}
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

    shared_ptr<vector<string>> get_fc() const
    {
        return fc_shared;
    }
    shared_ptr<set<int>> get_rl() const
    {
        return rl_shared;
    }
    shared_ptr<int> get_rc() const
    {
        return rc_shared;
    }
private:
    vector<string> file_contents;
    map<string, set<int>> results_lines;
    map<string, int> results_counts;

    shared_ptr<vector<string>> fc_shared = make_shared<vector<string>>(file_contents);
    shared_ptr<set<int>> rl_shared = make_shared<set<int>>(results_lines);
    shared_ptr<int> rc_shared = make_shared<int>(results_counts);
};

TextQuery::TextQuery(ifstream & ifs)
{
    //
}

QueryResult TextQuery::query(const string &search_word) const
{
    //
    QueryResult result(get_fc(), get_rl(), get_rc(), search_word);
    return result;
}

#endif // TEXT_QUERY_H
