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
    cout << "testquery" << endl;
    ifstream infile("/home/wys/code/cpp_primer_ch12/text_query_1.h");
    runQueries(infile);
}

void runQueries(ifstream &infile)
{
    TextQuery tq(infile);
    string search;
    cout << "Please input the word to query:" << endl;
    while(cin >> search)
    {
        if (search == "q") break;
        QueryResult qr = tq.query(search);
        print(cout, qr);
        cout << "Please input the word to query:" << endl;
    }
}
