//10以内的整数四则运算

#include <iostream>
#include <string>
#include <stack>

using std::string;
using std::cout;
using std::endl;
using std::stack;

int calc_no_par(string s)
{
    return '$';
}

int calc(string s)
{
    stack<char> sc;
    for(size_t i = 0; i < s.size(); ++i)
    {
        if (s[i] == ')')
        {
            string sub_expr;
            while(sc.top() != '(')
            {
                sub_expr.push_back(sc.top());
                sc.pop();
            }
            sc.pop();
            cout << sub_expr << " = ";
            sc.push(calc_no_par(sub_expr));
            cout << sc.top() << endl;
        }
        else
            sc.push(s[i]);
    }
    return 1;
}

int main()
{
    string exp = "1+2*((3/(1+2)*4)+(3+5)*6)-7*8+9";
    cout << calc(exp) << endl;
    return 0;
}
