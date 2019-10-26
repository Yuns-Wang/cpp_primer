#include <vector>
#include <iostream>
#define NDEBUG

using std::vector;
using std::cout;
using std::endl;

void print_vector(vector<int>::const_iterator, vector<int>::const_iterator);

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
    print_vector(vi.cbegin(), vi.cend());
    return 0;
}

void print_vector(vector<int>::const_iterator begin, vector<int>::const_iterator end)
{
#ifndef NDEBUG
    cout << "vector length: " << end - begin << " ";
#endif
    cout << *begin << " " << endl;
    if (end - begin == 1)
    {
        cout << endl;
        return;
    }
    else
        print_vector(begin + 1, end);
    return;
}
