#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>

using std::istream_iterator;
using std::ostream_iterator;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

void split_file(const string &infile, const string &outfile1, const string &outfile2)
{
    ifstream ifs(infile);
    ofstream ofs1(outfile1), ofs2(outfile2);
    istream_iterator<int> is_iter(ifs), is_iter_eof;
    vector<int> nums(is_iter, is_iter_eof);
    
    ostream_iterator<int> os_iter_1(ofs1, " ");
    ostream_iterator<int> os_iter_2(ofs2, "\n");
    std::for_each(nums.begin(), nums.end(), [&os_iter_1, &os_iter_2](const int i){(i % 2 == 1 ? os_iter_1 : os_iter_2) = i;});
}

int main()
{
    string in{"c10e33.in.txt"}, out1{"c10e33.out1.txt"}, out2{"c10e33.out2.txt"};
    split_file(in, out1, out2);
    return 0;
}

