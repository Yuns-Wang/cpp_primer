#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

class Person
{
    public:
    Person() = default;
    Person(std::string n, std::string a):name(n), address(a){}

    //get函数返回string
    std::string getName() const {return name;}
    std::string getAddress() const {return address;}

    private:
    std::string name;
    std::string address;
};

std::ostream &print(std::ostream &os, const Person &p)
{
    os << p.getName() << " " << p.getAddress();
    return os;
}
#endif
