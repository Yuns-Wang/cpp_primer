#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::vector;
using std::string;

int main()
{
	vector<string> vs_line, vs_word;
	string str;
	ifstream ifs("README.MARKDOWN");
	if (!ifs)
	{
		std::cout << "open file failed!" << std::endl;
	}
	/*
	while (std::getline(ifs, str))//注意getline用法 std::getline() std::istream::getline()
	{
		vs_line.push_back(str);
	}
	*/
	while (ifs >> str)
	{
		vs_word.push_back(str);
	}
	for(string &s : vs_word)
	{
		std::cout << s << std::endl;
	}
	return 0;
}
