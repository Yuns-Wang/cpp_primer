#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    char c1[] = "first one ";
    char c2[] = "second one";
    
    char c3[25];

    strcpy(c3, c1);
    strcat(c3, c2);

    for (const char c : c3)
        cout << c;
    cout << endl;
    return 0;
}
