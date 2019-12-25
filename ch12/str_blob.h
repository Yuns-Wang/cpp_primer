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
        StrBlob();
    private:
        shared_ptr<vector<string>> data;
}

#endif
