#include <vector>
#include <iostream>

using std::vector;
using std::cout; using std::endl;

int main()
{
    vector<int> vi;
    for (int i = 0; i < 100; ++i)
    {
        cout << "size: " << vi.size() << " capacity: " << vi.capacity() << endl;
        vi.push_back(i);
    }
    return 0;
}
