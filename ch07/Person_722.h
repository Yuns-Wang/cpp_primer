#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

class Person;
std::istream &read(std::istream&, Person&);
class Person
{
    friend std::istream &read(std::istream&, Person&);
    public:
    Person() = default;
    Person(std::string n, std::string a):name(n), address(a){}
    Person(std::istream &is){read(is, *this);}

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

std::istream &read(std::istream &is, Person &p)
{
    is >> p.name >> p.address;
    return is;
}
#endif
