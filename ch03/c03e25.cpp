#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vi(11);
    unsigned int i;
    vector<int>::iterator vi_iter = vi.begin();
    while (cin >> i)
    {
        if (i <= 100)
           ++*(vi_iter + i / 10);
    }

    for (int j : vi)
    {
        cout << j << endl;
    }
    return 0;
}
