#include <iostream>
#include "Sales_data_711.h"

int main()
{
	Sales_data sd1;
	print(std::cout, sd1);
	std::cout << std::endl;
	Sales_data sd2("book2");
	print(std::cout, sd2);
	std::cout << std::endl;
	Sales_data sd3("book3", 5, 2.5);
	print(std::cout, sd3);
	std::cout << std::endl;
	Sales_data sd4(std::cin);
	print(std::cout, sd4);
	std::cout << std::endl;
	return 0;
}
