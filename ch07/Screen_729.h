#ifndef SCREEN
#define SCREEN

#include <iostream>
#include <string>
#include <cstddef>

class Screen
{
    public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos h, pos w) : height(h), width(w) {}
    Screen(pos h, pos w, char ch) : height(h), width(w), contents(w*h, ch) {}
    
    Screen move(pos h, pos w);
    Screen set(char c) {contents[cursor] = c; return *this;}
    Screen set (pos h, pos w, char c);
    Screen display(std::ostream &os) {do_display(os); return *this;}
    const Screen &display(std::ostream &os) const {do_display(os); return *this;}
    char get() const {return contents[cursor];}
    char get(pos h, pos w) const;
    void some_member() const {++access_ctr;}
    
    private:
    std::string contents;
    pos cursor = 0;
    pos height = 0, width = 0;
    mutable size_t access_ctr = 0;
    void do_display(std::ostream &os) const {os << contents;}
};

inline Screen Screen::set(pos h, pos w, char c)
{
    contents[h*width + w] = c;
    return *this;
}
inline Screen Screen::move(pos h, pos w)
{
    cursor = width * (h-1) + w;
    return *this;
}

inline char Screen::get(pos h, pos w) const
{
    return contents[width * (h-1) + w];
}

#endif