#ifndef C13E05
#define C13E05

#include <string>

class HasPtr {
    public:
        HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
        HasPtr(const HasPtr &h):ps(new std::string(*(h.ps))), i(h.i) {}
        HasPtr & operator=(const HasPtr &h)
        {
            i = h.i;
            ps = new std::string(*(h.ps));
            return *this;
        }
    private:
        std::string *ps;
        int i;
};
#endif
