#include <fstream>
#include <iostream>
#include <string>
#include "../ch07/Sales_data_741.h"

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	cout << argv[1] << endl;
	std::ifstream file(argv[1]);
	Sales_data total;
	if (read(file, total))
	{
		Sales_data trans;
		while (read(file, trans))
		{
			if (trans.isbn() == total.isbn())
			{
				total.combine(trans);
			} else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
}
