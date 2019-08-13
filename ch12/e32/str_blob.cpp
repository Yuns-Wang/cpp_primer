#include <string>
#include <iostream>

#include "str_blob.h"

using std::string;
using std::cout;
using std::endl;

void StrBlob::check(size_type sz, const string &s) const
{
    if (sz > contents->size())
    {cout << s << endl;}
}

void StrBlob::pop_back()
{
    check(size(), "nothing to pop");
    contents->pop_back();
}

string & StrBlob::front()
{
    check(0, "empty strblo");
    return contents->front();
}

string & StrBlob::back()
{
    check(0, "empty strblo");
    return contents->back();
}

std::string & StrBlob::at(size_type i) const
{
    check(i, "no i element");
    return contents->at(i);
}
