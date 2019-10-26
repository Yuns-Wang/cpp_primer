#include <vector>
#include <iostream>

using std::vector;

/*
int func(int, int);

using f1 = int (*) (int, int);
vector<f1> v1;

using f2 = int(int, int);
vector<f2*> v2;

typedef int(*f3)(int, int);
vector<f3> v3;

using f4 = decltype(func);
vector <f4*> v4;
*/

int func1 (int a, int b)
{
    return a+b;
}

int func2 (int a, int b)
{
    return a-b;
}

int func3 (int a, int b)
{
    return a*b;
}

int func4 (int a, int b)
{
    return a/b;
}

int main()
{
    typedef int(*fp)(int, int);
    vector<fp> v1;
    v1.push_back(func1);
    v1.push_back(func2);
    v1.push_back(func3);
    v1.push_back(func4);
    for (auto f : v1)
        std::cout << f(1,2) << std::endl;
    return 0;
}
