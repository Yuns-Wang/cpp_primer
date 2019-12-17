#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

int main()
{
    vector<string> vs = {"ni", "women"};
    list<const char*> lp = {"ni", "women"};
    vector<const char*> vp = {"ni", "women"};
    cout << equal(vs.cbegin(), vs.cend(), lp.cbegin()) << endl;
    cout << std::equal(vp.cbegin(), vp.cend(), lp.cbegin()) << endl;
    return 0;
}
