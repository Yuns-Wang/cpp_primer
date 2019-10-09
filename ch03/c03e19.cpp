#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi;
    int i;
    while (cin >> i)
    {
        vi.push_back(i);
    }

    if (vi.empty())
    {
        std::cerr << "empty input";
        return -1;
    }

    for (vector<int>::size_type j = 0; j < vi.size() - 1; ++j)
    {
        cout << j <<  " + " << j+1 << " : " << vi[j] + vi[j+1] << endl;
    }
    for (vector<int>::size_type m = 0, n = vi.size()-1; m <= n; ++m, --n)
    {
        if (m == n)
            cout << m << " : " << vi[m] << endl;
        else
            cout << m << " + " << n << " : " << vi[m] + vi[n] << endl;
    }
    return 0;
}
