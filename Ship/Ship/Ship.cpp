#include <iostream>
#include <unordered_map>
#include <functional>
#include <vector>
using namespace std;
class Ship
{
public:
    Ship(int containerCount, std::function<int(int)> fillContainer)
    {
        for (int i = 0; i < containerCount; i++)
        {
            containers.push_back(i);
        }
    }
    int peekContainer(int containerIndex)
    {
        return *(containers.begin()+containerIndex);
    }
private:
    vector<int> containers;
};

#ifndef RunTests
int main()
{
    Ship ship(10000, [](int containerIndex) { return containerIndex; });
    for (int i = 0; i < 10000; i++) {
        std::cout << "Container: " << i << ", cargo: " << ship.peekContainer(i) << "\n";
    }
}
#endif
