#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>

using std::string;
using std::cout;
using std::endl;
using std::end;
using std::map;
using std::ifstream;
using std::istringstream;

void buildRules(map<string, string> &, string &);
void transform(map<string, string> &, string &);

int main()
{
    string rules = "rules.txt", text = "text.txt";
    //建立map
    map<string, string> rules_map;
    buildRules(rules_map, rules);

    //处理输入
    ifstream ifs_text(text);
    string line;
    //while (line = ifs_text.getline())
    while (getline(ifs_text, line))
    {
        istringstream iss(line);
        string word;
        while(iss >> word)
        {
            //转换短句
            transform(rules_map, word);
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}

void buildRules(map<string, string> &rules_map, string &rules_file)
{
    ifstream ifs_rules(rules_file);
    string one_line;
    while (getline(ifs_rules, one_line))
    {
        string::iterator space_iter = std::find(one_line.begin(), one_line.end(), ' ');
        rules_map[string(one_line.begin(), space_iter)] = string(space_iter+1, one_line.end());
    }
}

void transform(map<string, string> &rules_map, string &word)
{
    if (rules_map.find(word) != rules_map.end())
        word = rules_map[word];
}
