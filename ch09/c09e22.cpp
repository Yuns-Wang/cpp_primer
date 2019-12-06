#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> iv{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for (vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2; iter != mid;)
    {
        if (*iter == 4)
        {
            iter = iv.insert(iter, 8) + 2;
            mid = iv.begin() + iv.size()/2;
        }
        else 
            ++iter;
    }

    for (auto i : iv)
        cout << i << " ";
    cout << endl;
    return 0;
}
