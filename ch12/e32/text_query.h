#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>

#include "str_blob.h"

class QueryResult;

class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;//type
    TextQuery(std::ifstream &);
    QueryResult query (const std::string&) const;//&, const
private:
    StrBlob file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> results;
};

class QueryResult {
public:
    QueryResult(std::string, StrBlob, std::shared_ptr<std::set<TextQuery::line_no>>);
    friend std::ostream& print(std::ostream&, const QueryResult&);//&, const
private:
    std::string sought;
    StrBlob file;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
};
#endif // TEXT_QUERY_H
