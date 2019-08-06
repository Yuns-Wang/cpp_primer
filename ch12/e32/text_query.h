#ifndef TEXT_QUERY_H
#define TEXT_QUERY_H
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <memory>

class QueryResult;

class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;//type
    TextQuery(std::ifstream &);
    QueryResult query (const std::string&) const;//&, const
private:
    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string, std::shared_ptr<std::set<line_no>>> results;
};

class QueryResult {
public:
    QueryResult(std::string, std::shared_ptr<std::vector<std::string>>, std::shared_ptr<std::set<TextQuery::line_no>>);//line_no
    friend std::ostream& print(std::ostream&, const QueryResult&);//&, const
private:
    std::string sought;
    std::shared_ptr<std::vector<std::string>> file;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
};
#endif // TEXT_QUERY_H
