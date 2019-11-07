#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using std::cin;
using std::vector;
using std::istringstream;
using std::string;

struct PersonInfo {
    string name;
    vector<string> phones;
};

void print (std::ostream &os, const PersonInfo &person) {
    os << person.name << std::endl;
    for (const string &phone : person.phones) {
        os << phone << std::endl;
    }
}

int main() {
    string line;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(cin, line)) {
        PersonInfo person;
        record.clear();//不要忽略
        record.str(line);
        record >> person.name;
        string phone;
        while (record >> phone) {
            person.phones.push_back(phone);
        }
        print(std::cout, person);
        people.push_back(person);
    }
    /*
    for (const auto &person : people) {
        print(std::cout, person);
    }
    */
    return 0;
}