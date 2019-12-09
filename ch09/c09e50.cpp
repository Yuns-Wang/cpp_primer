#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<string> vs = {"12","13","4","66","34","87","29","390","1","93"};
    int i_sum = 0;
    double d_sum = 0;
    for (auto s : vs)
    {
        i_sum += stoi(s);
        d_sum += stod(s);
    }
    cout << i_sum << endl;
    cout << d_sum << endl;
    return 0;
}
