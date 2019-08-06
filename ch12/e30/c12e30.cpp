#include <iostream>
#include <fstream>
#include <string>

#include "text_query.h"

using std::cout;
using std::endl;
using std::cin;
using std::ifstream;

using std::string;

void runQueries(ifstream &infile);

int main()
{
    ifstream infile("/home/wys/code/cpp_primer/ch12/e30/text_query.cpp");
    runQueries(infile);
}

void runQueries(ifstream &infile)
{
    string search;
    TextQuery tq(infile);
    do
    {
        cout << "Please input the word to query or q to quit:" << endl;
        if (!(cin >> search) || search == "q") break;
        print(cout, tq.query(search));
    } while (true);

}
