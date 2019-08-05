#include <iostream>
#include <fstream>
#include <string>

#include "text_query.h"
#include "query_result.h"

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;

using std::string;

void runQueries(ifstream &infile);

int main()
{
    ifstream infile("/home/wys/code/cpp_primer/ch12/text_query_1.h");
    runQueries(infile);
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    cout << "results_counts:" << endl;
    for (auto map_it = tq.get_rc()->cbegin(); map_it != tq.get_rc()->cend(); ++map_it) {
        cout << map_it->first << " , " << map_it->second << endl;
    }

    while(true)
    {
        cout << "Please input the word to query:" << endl;
        string search;
        if (!(cin >> search) || search == "q") break;
        print(cout, tq.query(search));
    }
}
