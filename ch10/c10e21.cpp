#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 10;
    //mutable并不会改变捕获值本身，只是用于多次调用之间改变捕获值
    auto func = [i] () mutable {return (i == 0 ? true : i-- == 0);};
    auto func2 = [&i]{return (i == 0 ? true : i-- == 0);};
    cout << "==============func()===========";
    while (!func())
    {
        // i 的值没有变，但是func函数内的值发生了变化
        cout << i << endl;
    }
    cout << "==============func2()===========";
    while (!func2())
        // i 的值和func2函数内的值均发生改变
        cout << i << endl;
    return 0;
}
