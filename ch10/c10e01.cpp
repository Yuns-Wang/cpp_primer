#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    vector<int> vi;
    int i, target = 10;
    while (cin >> i)
        vi.push_back(i);
    cout << count(vi.begin(), vi.end(), target) << endl;
    return 0;
}
