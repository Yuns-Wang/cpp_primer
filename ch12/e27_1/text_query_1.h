#ifndef TEXT_QUERY
#define TEXT_QUERY

#include <string>
#include <vector>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>

using std::string;
using std::vector;
using std::set;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;

class TextQuery1 {
public:
    TextQuery1(){}
    TextQuery1(string, string);

	void search();
	void print_results()
	{
		cout << count << endl;
		set<int>::iterator set_it = results.begin();
		while (set_it != results.end())
		{
			cout << "(line " << (*set_it)+1 << ") : " << file_contents[*set_it] << endl;
			++set_it;
		}
	}

private:
	vector<string> file_contents;
	string search_word;
    //int count(0); //错误？因为在函数外使用这种形式会被理解为函数定义。
	int count = 0;
	set<int> results;
};


TextQuery1::TextQuery1(string file_name, string search_word) : search_word(search_word)
{
	//
	ifstream ifile_stream(file_name);
	string tmp_str;
	while (getline(ifile_stream, tmp_str))
	{
		file_contents.push_back(tmp_str);
	}
}

void TextQuery1::search()
{
	//
	for (int i = 0; i < file_contents.size(); ++i )
	{
		int count_init = count;
		string single_word;
		istringstream isstream(file_contents[i]);
		while (isstream >> single_word)
		{
			std::size_t found = single_word.find(search_word);
			if (found != string::npos)
			{
				++count;
			}
		}
		if (count_init != count)
		{
			results.insert(i);
		}
	}
}
#endif
