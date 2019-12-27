#ifndef STRBLOB_H
#define STRBLOB_H
#include <memory>
#include <vector>
#include <string>

using std::make_shared;
using std::shared_ptr;
using std::vector;
using std::string;

class StrBlob
{
    public:
        StrBlob() : data(make_shared<vector<string>>()) {};
        StrBlob(std::initializer_list<string> il) : data(make_shared<vector<string>>(il)) {};

        void push_back(string &s) {data->push_back(s);}
        void pop_back();

        vector<string>::size_type size() {return data->size();}
        bool empty() {return data->empty();}
        string& front();
        string& front() const;
        string& back();
        string& back() const;
    private:
        void check(vector<string>::size_type index, const string& mesg) const;
        shared_ptr<vector<string>> data;
}; //千万记得这里有；

#endif
