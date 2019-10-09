#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    //vector<int> v;
    vector<string> v{10};
    //vector<int>::iterator begin = v.begin(), end = v.end();
    vector<string>::iterator begin = v.begin(), end = v.end();
    cout << "length: " << end - begin << endl;
    while (begin != end)
    {
        cout << *begin << endl;
        ++begin;
    }
    return 0;
}
