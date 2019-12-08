#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<char> vc = {'a', 'b', 'c', 'd'};
    string str(vc.begin(), vc.end());
    cout << str << endl;
    return 0;
}
