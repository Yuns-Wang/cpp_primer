#include <string>
#include <iostream>

class Date
{
    public:
        Date() = default;
        Date(string s);
    private:
        unsigned year;
        unsigned month;
        unsigned day;
}

Date::Date(string s)
{
}
