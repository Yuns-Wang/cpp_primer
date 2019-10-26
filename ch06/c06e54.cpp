#include <vector>

using std::vector;

int func(int, int);

using f1 = int (*) (int, int);
vector<f1> v1;

using f2 = int(int, int);
vector<f2*> v2;

typedef int(*f3)(int, int);
vector<f3> v3;

using f4 = decltype(func);
vector <f4*> v4;

int main()
{
    return 0;
}
