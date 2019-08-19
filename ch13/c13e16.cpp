#include <iostream>

class numberd {
public:
	numberd():mysn(++count) {}
	numberd(const numberd&):mysn(++count) {}
	friend void f(const numberd&);
private:
	static int count;
	int mysn;
};

int numberd::count = 0;

void f (const numberd &s) { std::cout << s.mysn << std::endl; }

int main()
{
	numberd a, b = a, c = b;
	f(a); f(b); f(c);
}
