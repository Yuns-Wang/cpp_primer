#include <memory>
#include <string>
#include <iostream>

using std::shared_ptr;
using std::string;

struct destination;
struct connection;
connection connect(destination*);
void disconnect(connection);
void endfunc(connection*);

void f(destination &d)
{
    auto c = connect(d);
    shared_ptr<connection> sp_c = make_shared<connection>(&c, endfunc);
}