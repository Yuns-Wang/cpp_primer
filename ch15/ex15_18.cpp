#include <iostream>
#include "ch15_5.h"

using namespace std;

int main()
{
    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
//练习
    d1.pub_mem();
    /*
    cout << d1.priv_mem << endl;
    cout << d1.prot_mem << endl;
    */

    /*
    d2.pub_mem();
    cout << d2.priv_mem << endl;
    cout << d2.prot_mem << endl;
    */

//练习15.5
    Base *p = &d1;
    //p = &d2; 错误，只有public继承的派生类才能向基类指针/引用转换
    //p = &d3;
    return 0;

}
