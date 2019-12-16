#include <string>
#include <iostream>

using std::string;

class My_date
{
    public:
        My_date() = default;
        My_date(string s);
    private:
        unsigned year;
        unsigned month;
        unsigned day;
};

My_date::My_date(string s)
{
    unsigned format;
    if (s.find(',') != string::npos) //  January 1, 1990
        format = 1;
    else if (s.find('/') != string::npos) //  1/1/190
        format = 2;
    else //  Jan 1 1900
        format = 1;

    switch(format)
    {
    case 1:
        if (s.find("Jan") < s.size()) 
            month = 1;
        if (s.find("Feb") < s.size()) 
            month = 2;
        if (s.find("Mar") < s.size()) 
            month = 3;
        if (s.find("Apl") < s.size()) 
            month = 4;
        if (s.find("May") < s.size()) 
            month = 5;
        if (s.find("Jun") < s.size()) 
            month = 6;
        if (s.find("Jul") < s.size()) 
            month = 7;
        if (s.find("Aug") < s.size()) 
            month = 8;
        if (s.find("Sep") < s.size()) 
            month = 9;
        if (s.find("Oct") < s.size()) 
            month = 10;
        if (s.find("Nov") < s.size()) 
            month = 11;
        if (s.find("Dec") < s.size()) 
            month = 12;

    break;
    case 2:
    break;
    }
}
