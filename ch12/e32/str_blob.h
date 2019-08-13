#ifndef STR_BLOB_H
#define STR_BLOB_H

#include <memory>
#include <vector>
#include <string>
#include <initializer_list>
#include <iostream>

class StrBlob
{
public:
    typedef std::vector<std::string>::size_type size_type;
    StrBlob()=default;
    StrBlob(std::initializer_list<std::string>);
    bool empty(){return contents->empty();}
    size_type size(){return contents->size();}
    void push_back(const std::string &s){contents->push_back(s);}
    void pop_back();
    std::string & front();
    std::string & back();
    std::string & at(size_type) const;
private:
    std::shared_ptr<std::vector<std::string>> contents;
    void check(size_type, const std:: string &) const;
};

#endif // STR_BLOB_H
