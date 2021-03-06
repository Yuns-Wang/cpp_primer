#ifndef SCREEN
#define SCREEN

#include <string>
#include <cstddef>

class Screen
{
    public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w) {}
    Screen(pos h, pos w, char ch) : height(h), width(w), contents(h*w, ch) {}
    
    Screen &move(pos h, pos w);
    char get() const {return contents[cursor];}
    char get(pos h, pos w) const;
    void some_member() const {++access_ctr;}
    
    private:
    std::string contents;
    pos cursor = 0;
    pos height = 0, width = 0;
    mutable size_t access_ctr = 0;
};

inline Screen &Screen::move(pos h, pos w)
{
    cursor = width * (h-1) + w;
    return *this;
}

inline char Screen::get(pos h, pos w) const
{
    return contents[width * (h-1) + w];
}

#endif