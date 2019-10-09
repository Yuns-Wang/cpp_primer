#include <iostream>
#include <vector>
#include <string>
#include <cstddef>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::begin;
using std::end;

int main()
{
    string sa[5] = {"1", "2", "3"};
    string sa2[5] = {"1", "2", "3"};
    if (sizeof(sa)/sizeof(string) != (end(sa2) - begin(sa2)))
    {
        cout << false << endl;
    } else {
        size_t i = 0;
        ptrdiff_t len = end(sa2) - begin(sa2);
        while (i < len && sa[i] == sa2[i])
        {
            ++i;
        }

        if (i == len)
            cout << true << endl;
        else
            cout << false << endl;
    }

    vector<string> sv;
    vector<string> sv2;
    cout << (sv == sv2) << endl;
    return 0;
}
