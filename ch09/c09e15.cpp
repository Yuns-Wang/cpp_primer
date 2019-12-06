#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> vi1(10, 1);
    vector<int> vi2(15, 1);
    cout << (vi1 < vi2) << endl;
    return 0;
}
