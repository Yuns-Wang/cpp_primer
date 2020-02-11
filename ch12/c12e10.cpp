#include <memory>
#include <iostream>

using std::shared_ptr;

void process(shared_ptr<int> sp)
{
    std::cout << "inside the function : " << sp.use_count() << std::endl;
}
int main()
{
    shared_ptr<int> p(new int(42));
    std::cout << p.use_count() << std::endl;
    process(shared_ptr<int>(p));
    std::cout << p.use_count() << std::endl;
}
