#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i = 0;
    int sum = 0;
    while (cin >> i)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
