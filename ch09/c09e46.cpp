#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

string &combine_name(string &name, string &before, string &after)
{
    name.insert(0, before);
    name.insert(name.size(), after);
    return name;
}

int main()
{
    string name = "wang", before_name = "Mr.", after_name = " Jr";
    cout << name << endl;
    combine_name(name, before_name, after_name);
    cout << name << endl;
    return 0;
}
