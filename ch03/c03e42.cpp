#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    vector<int> vi(begin(a), end(a));
    int a2[10];
    for (vector<int>::size_type i = 0; i < vi.size(); ++i)
    {
        a2[i] = vi[i];
    }
    for (int i : a2)
        cout << i << " ";
    cout << endl;
    return 0;
}
