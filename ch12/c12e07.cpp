#include <iostream>
#include <memory>
#include <vector>

using std::vector;
using std::shared_ptr;
using std::make_shared;

shared_ptr<vector<int>> create_vec()
{
    shared_ptr<vector<int>> sp_vec = make_shared<vector<int>>();
    return sp_vec;
}

void assign_vec(shared_ptr<vector<int>> sp_vec)
{
    int i;
    while(std::cin >> i)
    {
        sp_vec->push_back(i);
    }
}

void print_vec(shared_ptr<vector<int>> sp_vec)
{
    for(int i : *sp_vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    shared_ptr<vector<int>> sp_vec = create_vec();
    assign_vec(sp_vec);
    print_vec(sp_vec);
    return 0;
}