#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H

#include <string>
#include <vector>
#include <map>
#include <set>

#include <fstream>

using std::string;
using std::vector;
using std::map;
using std::set;

using std::ifstream;

class TextQuery
{
public:
    TextQuery(){}
    TextQuery(ifstream);
private:
    vector<string> file_contents;
    map<string, set<int>> results_map;
};

#endif // TEXT_QUERY_H
