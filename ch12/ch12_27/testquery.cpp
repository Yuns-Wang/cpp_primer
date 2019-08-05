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
    ifstream infile("/home/wys/code/cpp_primer/ch12/ch12_27/text_query.h");
    runQueries(infile);
}

void runQueries(ifstream &infile)
{
    /*
    TextQuery tq(infile);
    string search;
    while(true)
    {
        cout << "Please input the word to query:" << endl;
        if (!(cin >> search) || search == "q") break;
        print(cout, tq.query(search));
    }
    */

    TextQuery tq(infile);
    string search;
    cout << "Please input the word to query:" << endl;
    while (cin >> search && search != "q")
    {
        print(cout, tq.query(search));
        cout << "Please input the word to query:" << endl;
    }

    /*
    string search;
    do
    {
        TextQuery tq(infile);
        cout << "Please input the word to query:" << endl;
    } while ((cin >> search) && (search != "q"));
    */
}
