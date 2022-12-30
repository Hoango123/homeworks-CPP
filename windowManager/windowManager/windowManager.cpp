#include <iostream>
#include <string>
#include <vector>
using namespace std;

class WindowManager
{
    vector<string> window;
public:
    void open(const std::string windowName)
    {
        window.push_back(windowName);
    }

    void close(const std::string windowName)
    {
        int tmp;
        for (int i = 0; i < window.size(); i++)
        {
            if (windowName == window[i])
            {
                window.erase(window.begin() + i);
            }
        }
    }

    std::string getTopWindow()
    {
        return window.back();
    }
};


#ifndef RunTests
int main()
{
    WindowManager wm;
    wm.open("Calculator");
    wm.open("Browser");
    wm.open("Player");
    wm.close("Browser");
    wm.close("Player");
    wm.open("Chrome");
    std::cout << wm.getTopWindow();// tra ve Chrome
    
    /*
    vector<string> window;
    window.push_back("Hoang");
    window.push_back("Huu");
    window.push_back("Ngo");
    window.erase(window.begin() + 1);
    for (string x : window)
    {
        cout << x << endl;
    }
    cout << window.size() << endl;
    */
}
#endif
