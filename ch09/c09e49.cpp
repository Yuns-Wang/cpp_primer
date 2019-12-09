#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    string s;
    string mids = {"acemnorsuvwxzACEMNORSUVWXZ"};
    int count = 0;
    unsigned from = 0, to = 0;

    cin >> s;
    for(int i = 0, j = 0; i < s.size(); i = j)
    {
        //cout << "======================" << endl;
        i = s.find_first_of(mids, i);
        if (i == string::npos)
            i = s.size();
        j = s.find_first_not_of(mids, i);
        if (j == string::npos)
            j = s.size();

        //cout << i << ", " << j << endl;
        if (count < j - i)
        {
            count = j - i;
            from = i;
            to = j;
        }
        //cout << from << ", " << to << endl;
    }

    cout << s.substr(from, to - from) << endl;
}
