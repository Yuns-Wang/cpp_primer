#include <iostream>
#include <string>
#include <map>
#include <utility>

int main()
{
    std::string s;
    std::map<std::string, size_t> words;
    while (std::cin >> s)
    {
        std::pair<std::map<std::string, size_t>::iterator, bool> result = words.insert(std::pair<std::string, size_t>(s, 1));
        if (!result.second)
            ++result.first->second;
    }

    for (std::pair<const std::string, size_t> word : words)
        std::cout << word.first << " : " << word.second << std::endl;
    return 0;
}
