#include <vector>
#include <list>
#include <iostream>
#include <string>

using std::vector;
using std::list;
using std::endl;
using std::cout;
using std::string;

int main()
{
    list<const char*> c_list = {"abc", "def", "xyz", "opq", "rst"};
    vector<string> s_vec;
    s_vec.assign(c_list.begin(), c_list.end());
    for (auto s : s_vec)
    {
        cout << s << " ";
    }
    cout << endl;
}
