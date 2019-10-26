#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    std::string s;
    s += argv[1];
    s += argv[2];
    std::cout << s << std::endl;
    return 0;
}
