#include <vector>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi(10, 1);
    for(int i : vi)
        cout << i << " ";
    cout << endl;
    fill_n(vi.begin(), vi.size(), 0);
    for(int i : vi)
        cout << i << " ";
    cout << endl;
    return 0;
}
