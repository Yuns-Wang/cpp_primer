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
    cout << "Please input the file in which to search (press Enter to choose the default file):" << endl;
    cin >> file;
    if (file.length() == 0)
    {
        file = "/home/wys/code/cpp_primer/ch12/text_query_1.h";
    }
    cout << "Please input the word to search:" << endl;
    cin >> search;
    //int i(0);
    TextQuery1 tq(file, search);
//	tq.test();
    //cout << i << endl;
    tq.search();
    tq.print_results();
	return 0;
}
