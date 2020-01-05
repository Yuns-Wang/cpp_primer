#include <iostream>
#include <memory>
#include <vector>

using std::vector;
using std::shared_ptr;

vector<int>* create_vec()
{
    vector<int> *p_vec = new vector<int>();
    return p_vec;
}

void assign_vec(vector<int> *p_vec)
{
    int i;
    while(std::cin >> i)
    {
        p_vec->push_back(i);
    }
}

void print_vec(vector<int> *p_vec)
{
    for(int i : *p_vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    vector<int> *p_vec = create_vec();
    assign_vec(p_vec);
    print_vec(p_vec);
    delete p_vec;
    p_vec = nullptr;
    return 0;
}