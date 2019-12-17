#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;

int main()
{
    vector<int> vi{1,2,3,4,5,6,10,7,8,9};
    int sum = 0;
    cout << accumulate(vi.begin(), vi.end(), sum) << std::endl;
    return 0;
}
