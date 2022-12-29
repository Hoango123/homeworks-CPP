#include <vector>
#include <stdexcept>
#include <iostream>
#include <map>
#include <set>
using namespace std;

int nthLowestSelling(const vector<int>& sales, int n)
{
    map<int, int> mp;
    set<int> se;
    for (int i = 0; i <sales.size(); i++)
    {
        mp[sales[i]]++;
    }
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        se.insert(i->second);
    }
    set<int>::iterator it = se.begin();
    for (int i = 1; i < n; i++)
    {
        ++it;
    }
    int a;
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second == *it)
        {
            a = i->first;
        }
    }
    return a;


}


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
    //quyen 1 ban dc 5 , quyen 2 ban 4, quyen 3 ban 3, quyen 4,ban2,quyen 5 ban 1
    int x = nthLowestSelling(input, 4);
    cout << x;
   
    /*
    map<int, int> mp;
    set<int> se;
    for (int i = 0; i < input.size(); i++)
    {
        mp[input[i]]++;
    }
 
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        cout << "Quyen sach so: " << i->first << " ban duoc:" << i->second << endl;
    }
    cout << mp.size() << endl;
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        se.insert(i->second);
    }
    set<int>::iterator it = se.begin();
    for (int i = 1; i < 5; i++)
    {
        ++it;
    }
    cout << *it << endl;
    int a;
    for (map<int, int>::iterator i = mp.begin(); i != mp.end(); i++)
    {
        if (i->second == *it)
        {
            a = i->first;
        }
    }
    cout << a << endl;
    */
}
#endif
