#include <string>
#include <iostream>

using std::string;

class Employee {
    public:
    Employee() : id(s_id++) {}
    Employee(const string &name):name(name), id(s_id++){}
    void show() const {std::cout << name << id << s_id << std::endl;}

    private:
    static int s_id;
    string name;
    int id;
};

int Employee::s_id = 0;

int main()
{
    Employee e1;
    Employee e2("wys");
    e1.show();
    e2.show();
    return 0;
}