#include <memory>
#include <string>
#include <iostream>
#include <vector>

using std::shared_ptr;
using std::make_shared;
using std::string;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    shared_ptr<int> sp_i = make_shared<int>(3);
    cout << *sp_i << endl;

    shared_ptr<string> sp_s = make_shared<string>(8, 'h');
    cout << *sp_s << endl;

    shared_ptr<string> sp_s2 = make_shared<string>();
    cout << *sp_s2 << endl;

    auto sp_vs = make_shared<vector<string>>();
    cout << sp_vs.use_count() << endl;
    shared_ptr<vector<string>> sp_vs2(sp_vs);
    cout << sp_vs2.use_count() << endl;
    return 0;
}