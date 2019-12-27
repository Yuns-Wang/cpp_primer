#include "str_blob.h"

void StrBlob::pop_back()
{
    check(0, "超出范围");
    data->pop_back();
}

string& StrBlob::front()
{
    check(0, "超出范围");
    return data->front();
}
string& StrBlob::front() const
{
    check(0, "超出范围");
    return data->front();
}

string& StrBlob::back()
{
    check(0, "超出范围");
    return data->back();
}
string& StrBlob::back() const
{
    check(0, "超出范围");
    return data->back();
}

void StrBlob::check(vector<string>::size_type index, const string &mesg) const
{
    if (index >= data->size())
        throw std::out_of_range(mesg);
}
