#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> nums{1,2,3,4,5,6,7,8,9,10};
    for(vector<int>::const_iterator iter = nums.cend(); iter >= nums.cbegin();)
    {
        cout << *--iter << " ";
    }
    cout << endl;
    return 0;
}
