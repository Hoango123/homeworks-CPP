#include <vector>
#include <stdexcept>
#include <iostream>
#include <map>
using namespace std;
/*
int nthLowestSelling(const vector<int>& sales, int n)
{
    map<int, int> mp;
    for (int i = 0; i < sales.size(); i++)
    {
        mp[sales[i]]++;
    }
    for (map<int,int>::iterator i = mp.begin(); i !=mp.end(); i++)
    {

    }
}
*/

#ifndef RunTests
int main()
{
    vector<int> input;
    
    input.push_back(2);
    input.push_back(3);
    input.push_back(4);
    input.push_back(5);
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    input.push_back(4);
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    input.push_back(1);
    input.push_back(2);
    input.push_back(1);
    input.push_back(1);

    //int x = nthLowestSelling(input, 2);
    //cout << x;
    map<int, int> mp;
    for (int i = 0; i < input.size(); i++)
    {
        mp[input[i]]++;
    }
 
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        cout << "Quyen sach so: " << i->first << " ban duoc:" << i->second << endl;
    }
    cout << mp.size() << endl;
}
#endif
