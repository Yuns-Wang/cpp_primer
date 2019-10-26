#include <iostream>
#include <cstddef>

using std::cout;
using std::cin;
using std::endl;

/*
void print(const int *ip)
{
    cout << *ip << endl;
}
*/

void print(const int ia[])
{
    cout << *ia << endl;
}

void print (const int ia[], size_t len)
{
    for (size_t i = 0; i < len; ++i)
    {
        cout << ia[i];
    }
    cout << endl;
}

void print(const int *begin, const int *end)
{
    for (const int *flag = begin; flag != end; ++flag)
    {
        cout << *flag;
    }
    cout << endl;
}

void print(const int (&ir)[2])
{
    for (auto i : ir)
        cout << i;
    cout << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(&i);
    print(j, std::end(j) - std::begin(j));
    print(j);
    print(j, j+2);
    return 0;
}
