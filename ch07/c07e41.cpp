#include <iostream>
#include <string>
#include "Sales_data_741.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_data s1;
    print(cout, s1);
    cout << endl;

    Sales_data s2("s2");
    print(cout, s2);
    cout << endl;

    Sales_data s3("s3", 3, 1.2);
    print(cout, s3);
    cout << endl;
    return 0;
}