#include <iostream>
#include <vector>
#include <numeric>

using std::vector;
using std::cout;

int main()
{
    vector<double> vd = {1.1, 2.2, 3.3};
    int sum = 0;
    cout << accumulate(vd.begin(), vd.end(), 0) << std::endl;
    return 0;
}
