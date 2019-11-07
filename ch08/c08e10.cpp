#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::istringstream;

int main(int argc, char *argv[]) {
    ifstream in_file(argv[1]);
    vector<string> vs;
    string s;
    while (std::getline(in_file, s)) {
        vs.push_back(s);
    }
    string s_iss;
    for (const string &s_vs : vs) {
        cout << s_vs << endl;
        istringstream iss(s_vs);
        while (iss >> s_iss) {
            cout << s_iss << endl;
        }
    }
}