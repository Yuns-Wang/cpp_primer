#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<int> vi{};
    cout << vi[0] << endl;
    cout << vi.at(0) << endl;
    cout << vi.front() << endl;
    cout << *vi.begin() << endl;
    return 0;
}
