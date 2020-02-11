#include <string>
#include <iostream>

int main()
{
    auto p = new auto("hello");
    std::cout << *p << std::endl;

//A const object must be initialized!
    const int *pci = new const int(19);
    std::cout << *pci << std::endl;

    delete pci;
    return 0;
}