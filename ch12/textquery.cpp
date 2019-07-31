#include "text_query.h"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    string file("/home/wys/code/cpp_primer/ch12/text_query.h");
    string search("string");
	//int i(0);
	TextQuery tq(file, search);
//	tq.test();
	//cout << i << endl;
	tq.search();
	tq.print_results();
	return 0;
}
