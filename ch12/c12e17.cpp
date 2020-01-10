#include <memory>

using std::unique_ptr;

int main()
{
    int ix = 1024, *pi = &ix, *pi2 = new int(2048);
    typedef unipue_ptr<int> IntP;
    IntP p0(ix);//错误
    IntP p1(pi);//可通过编译，但是运行错误。unique_ptr离开作用域后会被释放，对其指向的内存调用delete，但是ix不是new分配的，无法delete。
    IntP P2(pi2);//可编译，但是运行错误。pi2指向的内存会被delete。
    IntP p3(&ix);//可编译，但是运行错误。
    IntP p4(new int(2048));//正确
    IntP p5(p2.get());//错误。
    return 0;
}