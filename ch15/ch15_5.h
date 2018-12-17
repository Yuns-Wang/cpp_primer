#ifndef CH15_5_H
#define CH15_5_H
#include <iostream>

using std::cout;
using std::endl;

class Base {
public:
    void pub_mem()
    {
        cout << "Base::pub_mem()" << endl;
    }

    void memfcn(Base &b) {b = *this;}

protected:
    int prot_mem;

private:
    char priv_mem;
};

struct Pub_Derv : public Base {
    int f()
    {
        return prot_mem;
    }
};

struct Prot_Derv : protected Base {

};

struct Priv_Derv : private Base {
    int f1() const
    {
        return prot_mem;
    }
};

struct Derived_from_Public : public Pub_Derv {
    int use_base()
    {
        return prot_mem;
    }
};

struct Derived_from_Private : public Priv_Derv {
    int use_base()
    {
       // return prot_mem;
        return 0;
    }
};

#endif // CH15_5_H
