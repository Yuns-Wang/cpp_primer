#ifndef DEBUG
#define DEBUG

class Debug
{
    public:
    constexpr Debug(bool b) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(0) {}
    private:
    bool hw;
    bool io;
    bool other;
};

#endif