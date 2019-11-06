#ifndef PERSON
#define PERSON

#include <string>
#include <iostream>

//注意声明的顺序
struct Person;
std::istream &read(std::istream &is, Person &p);

struct Person
{
    Person() = default;
    Person(std::string n, std::string a):name(n), address(a){}
    //下面的构造函数应该声明成explicit，因为os为引用，不能
    explicit Person(std::istream &os){read(os, *this);}//构造函数中也可以使用this
    std::string name;
    std::string address;
    //get函数返回string&
    std::string getName() const {return name;}
    std::string getAddress() const {return address;}
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
