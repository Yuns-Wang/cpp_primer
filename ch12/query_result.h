#ifndef QUERY_RESULT_H
#define QUERY_RESULT_H

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <map>
#include <set>

using std::ostream;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::shared_ptr;
using std::map;
using std::set;

class QueryResult
{
public:
    QueryResult(){}
    QueryResult(shared_ptr<vector<string>> fc_sharedptr, shared_ptr<map<string, set<int>>> rl_sharedptr, shared_ptr<map<string, int>> rc_sharedptr, string search_word):
        qr_fc_sharedptr(fc_sharedptr), qr_rl_sharedptr(rl_sharedptr), qr_rc_sharedptr(rc_sharedptr), qr_search_word(search_word)
    {}
    string get_word()
    {
        return qr_search_word;
    }
    int get_counts()
    {
        return (*qr_rc_sharedptr)[qr_search_word];
    }
    shared_ptr<vector<string>> get_file()
    {
        return qr_fc_sharedptr;
    }
    shared_ptr<map<string, set<int>>> get_lines()
    {
        return qr_rl_sharedptr;
    }

private:
    string qr_search_word;
    shared_ptr<vector<string>> qr_fc_sharedptr;//file contents
    shared_ptr<map<string, set<int>>> qr_rl_sharedptr;//results lines
    shared_ptr<map<string, int>> qr_rc_sharedptr;//results counts
};

void print(std::ostream &os, QueryResult qr)
{
    string word = qr.get_word();
    os << word << " occurs " << qr.get_counts() << " times:" << endl;
    auto rl_set_beg = (*(qr.get_lines()))[word].cbegin();
    auto rl_set_end = (*(qr.get_lines()))[word].cend();
    for(; rl_set_beg != rl_set_end; ++rl_set_beg)
    {
        os << "(line " << *rl_set_beg << ") " << (*(qr.get_file()))[*rl_set_beg - 1] << endl;
    }
}

#endif // QUERY_RESULT_H
