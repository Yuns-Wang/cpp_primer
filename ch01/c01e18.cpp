#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int current = 0, cnt = 0, next = 0;
    if (cin >> current)
    {
        ++cnt;
        while (cin >> next)
        {
            if (next == current)
            {
                ++cnt;
            } else 
            {
                cout << current << " appears " << cnt << " times" << endl;
                current = next;
                cnt = 1;
            }
        }
        cout << current << " appears " << cnt << " times" << endl;
    }
    return 0;
}
