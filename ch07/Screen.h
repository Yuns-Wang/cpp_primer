#ifndef SCREEN
#define SCREEN

#include <string>

class Screen
{
    public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w, std::string s) : height(h), width(w), contents(s) {}
    
    void move(pos h, pos w)
    {
        height = h;
        width = w;
    }
    char get() const {return contents[cursor];}
    const string &get() const {return contents;}
    
    
    private:
    std::string contents;
    pos cursor = 0;
    pos hight = 0, width = 0;
};

#endif