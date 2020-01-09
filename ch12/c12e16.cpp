#include <iostream>
#include <memory>

using std::unique_ptr;

int main()
{
    unique_ptr<int> up_i(new int(12));
    unique_ptr<int> up_i2 = up_i;
    unique_ptr<int> up_i3;
    up_i3 = up_i;
    return 0;
}