#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,0};
    for (int &i : vi)
        i = (i % 2 == 0 ? i : i * 2);
    for (int i : vi)
        cout << i << " ";
    cout << endl;
    return 0;
}
