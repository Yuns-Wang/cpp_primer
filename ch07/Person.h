#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

struct Person
{
    std::string name;
    std::string address;
    //get函数返回string&
    std::string &getName() const {return name;}
    std::string &getAddress() const {return address;}
};

std::istream &read(std::istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
    os << p.name << " " << p.address;
    return os;
}
#endif
