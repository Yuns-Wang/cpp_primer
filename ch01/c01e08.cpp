#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "/*" << endl;

    cout << "*/" << endl;
    cout << "*//" << endl;
    
    // cout << /* "*/" */;
    cout << /* "*/" *//" << endl;

    cout << /* "*/" /* "/*" */ << endl;

    //转义字符：
    cout << "//" << endl;
    cout << "/?" << "/a" << "\a" << "\n";

    return 0;
}
