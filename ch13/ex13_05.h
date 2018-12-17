#ifndef EX13_05
#define EX13_05
class HasPtr {
    public:
        HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
        HasPtr(const Hasptr &h):ps(new std::string(*(h.ps))), i(h.i) {}
    private:
        std::string *ps;
        int i;
};
#endif