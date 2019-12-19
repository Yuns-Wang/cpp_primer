#include <vector>
#include <string>
#include <iterator>
#include <iostream>
#include <fstream>
#include <algorithm>

using std::ifstream;
using std::istream_iterator;
using std::vector;
using std::string;

int main()
{
    ifstream ifs("c10e28.cpp");
    istream_iterator<string> is_iter(ifs), is_iter_eof;

    //vector<string> vs(is_iter, is_iter_eof);
    vector<string> vs;
    while(is_iter != is_iter_eof)
        vs.push_back(*is_iter++);

    std::for_each(vs.begin(), vs.end(), [](const string &s){std::cout << s << std::endl;});
    return 0;
}
