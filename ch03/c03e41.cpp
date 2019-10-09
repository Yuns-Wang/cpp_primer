#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    vector<int> vi(a, a + 10);
    for (int i : vi)
        cout << i << " ";
    cout << endl;
    return 0;
}
