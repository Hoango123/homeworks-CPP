#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;
//tree.size() tra ve so nut
int countInternalNodes(const std::vector<int>& tree)
{
    int internalNodes = 0;
    for (int i = 0; i < tree.size(); i++)
    {
        for (int j = 0; j < tree.size(); j++)
        {
            if (i == tree[j])//kiem tra nut i co con k?
            {
                internalNodes++; break;// co thi tang bien dem len va thoat
            }
        }

    }
    return internalNodes;
}
#ifndef RunTests
int main()
{
    std::vector<int> tree;
    tree.push_back(1);
    tree.push_back(3);
    tree.push_back(1);
    tree.push_back(-1);
    tree.push_back(3);
    tree.push_back(4);
    tree.push_back(0);
    tree.push_back(0);
    std::cout << countInternalNodes(tree);//in ra 4
}
#endif
