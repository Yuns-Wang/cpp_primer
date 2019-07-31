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

class TextQuery {
public:
	TextQuery(){}
	TextQuery(string, string);

	void search();

	void test()
	{
		for(string s : file_contents)
		{
			cout << s << endl;
		}
	}
	
	void print_results()
	{
		//cout << "The word " << search_word << " appears" << count << " times" << " in the file." << endl;

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
	//int count(0); //错误？
	int count = 0;
	set<int> results;
};


TextQuery::TextQuery(string file_name, string search_word) : search_word(search_word)
{
	//
	ifstream ifile_stream(file_name);
	string tmp_str;
	while (getline(ifile_stream, tmp_str))
	{
		file_contents.push_back(tmp_str);
	}
}

void TextQuery::search()
{
	//
	for (int i = 0; i < file_contents.size(); ++i )
	{
		int count_init = count;
		string single_word;
		istringstream isstream(file_contents[i]);
		while (isstream >> single_word)
		{
	//		cout << single_word << " , " << search_word << endl;
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
