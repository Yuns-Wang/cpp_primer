#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

struct X {
	X() {cout << "X() " << endl;}
	X(const X&) {cout << "X(const X&)" << endl;}
	X& operator=(const X &x)
	{
		cout << "X & operator=(const X&)" << endl;
		return *this;
	}
	~X() {cout <<"~X()" << endl;}
};
void func_ref(X& x1) {cout << "func_ref(X&)" << endl;}
void func(X x2) {cout << "func(X)" << endl;}

int main()
{
	/*
	X x;
    func(x);
	func_ref(x);
	*/

	/*
	X *x_ptr = new X();
	delete x_ptr;
	x_ptr = nullptr;
	*/

	X x;
	//vector<X> vx = {x};
	vector<X> vx2(10, x);
	return 0;
}
