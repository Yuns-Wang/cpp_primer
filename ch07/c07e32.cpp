#include <vector>
#include <string>

using std::vector;

class Screen;

class Window_mgr
{
    public:
    void clear();

    private:
    vector<Screen> vs;
};

class Screen
{
    friend void Window_mgr::clear();
    private:
    std::string contents = "init";
};

void Window_mgr::clear()
{
    for (auto &s : vs)
    {
        s.contents = "";
    }
}

int main()
{
    return 0;
}