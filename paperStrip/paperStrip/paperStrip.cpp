#include <string>
#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;
int minPieces(const vector<int>& original, const vector<int>& desired)
{
    int min = 0;
    int max = original.size();
    int tami = 0;
    int tamj = 0;
    for (int i = 0; i < original.size(); i++)
    {
        for (int j = 0; j < desired.size(); j++)
        {
            if (original[i] != desired[j])
            {
                continue;//kiem tra neu chua dung thi lap tiep
            }
            min += 1;
            tamj = ++j;
            tami = ++i;
            break;

        }
        if ((tami==max)||(tamj==max))//neu chi so tran qua max thi cho lap lai vong lap
        {
            --i;//do i vua tang o tren nen phai giam di 1
            continue;
        }
        if (original[tami] == desired[tamj])
        {
            min -= 1;
        }
        i--;
    }
    return min;
}

#ifndef RunTests
int main()
{
    vector<int> original = { 1, 2, 4, 3 ,5,6,7};
    vector<int> desired = { 7, 1, 2, 4,5,6,3 };
    cout << minPieces(original, desired) << endl;
}
#endif
