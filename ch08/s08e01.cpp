#include <iostream>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;
using std::istringstream;

istream &fun(istream &);

int main()
{
	/*
	istream &isf = fun(cin);
	cout << isf.rdstate() << endl;
	*/
	string str = "what causes the following while to terminate";
	istringstream iss(str);
	fun(iss);
	return 0;
}

istream &fun(istream &is)
{
	string str;
	while (is >> str)
	{
		cout << str << endl;
	}
	is.clear();
	return is;
}

