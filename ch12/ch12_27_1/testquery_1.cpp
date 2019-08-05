#include "text_query_1.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string file;
    string search;
    file = "/home/wys/code/cpp_primer/ch12/ch12_27_1/text_query_1.h";
    while (true)
    {
        cout << "Please input the word to search:" << endl;
        if (!(cin >> search) || search == "q") break;
        TextQuery1 tq(file, search);
        tq.search();
        tq.print_results();
    }
	return 0;
}
