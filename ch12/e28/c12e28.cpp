#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <set>

using std::vector;
using std::string;
using std::map;
using std::set;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;

int main()
{
    vector<string> file;
    map<string, set<int>> w_s_map;//word set map
    map<string, int> w_c_map;//word count map
    string search, file_name, line, word;
    int n_line = 1;

    cout << "Please input the file in which you want to query:" << endl;
    cin >> file_name;
    ifstream ifs(file_name);
    while (getline(ifs, line))
    {
        file.push_back(line);
        istringstream iss(line);
        while (iss >> word)
        {
            //handle punctuations
            w_s_map[word].insert(n_line);
            ++w_c_map[word];
        }
        ++n_line;
    }

    while (true)
    {
        cout << "Please input the word to query or q to quit:" << endl;
        if (!(cin >> search) || ("q" == search)) break;
        cout << w_c_map[search] << endl;
        for (auto m_iter = w_s_map[search].cbegin(); m_iter != w_s_map[search].cend(); ++m_iter)
        {
            cout << file[*m_iter - 1] << endl;
        }
    }
    return 0;
}
