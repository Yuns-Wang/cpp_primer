#include <iostream>
#include "Sales_data_712.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main() {
    if (cin) {
		Sales_data total(cin);
        while (cin) {
			Sales_data trans(cin);
            if (trans.isbn() == total.isbn()) {
				total.combine(trans);
            } else {
				print(cout, total);
                total = trans;
            }
        }
		print(cout, total);
    } else {
        cerr << "No Legal Input!" << endl;
        return -1;
    }
    return 0;
}
