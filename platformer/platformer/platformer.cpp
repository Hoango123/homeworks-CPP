#include <stdexcept>
#include <iostream>
#include <vector>

using namespace std;
class Platformer
{
private:
    vector<int> arr;
    int pst;
public:
    Platformer(int n, int position)
    {
        pst = position;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i);
        }
    }
    void jumpLeft()
    {
        if (pst < 2)
        {
            cout << "Khong the di chuyen sang trai" << endl;
        }
        else
        {
            arr.erase(arr.begin() + pst);
            pst = pst - 2;
        }
    }
    void jumpRight()
    {
        int size = arr.size() - 2;
        
        if (pst >= size)
        {
            cout << "Khong the di chuyen sang phai" << endl;
        }
        else
        {
            arr.erase(arr.begin() + pst);
            pst = pst + 1; // do da xoa di 1 phan tu thi mang vector da mat phan tu do
        }
    }

    int position()
    {
        return arr[pst];
    }
};
#ifndef RunTests
int main()
{
    Platformer platformer(9, 4);
    cout << platformer.position() << endl; // should print 4
    platformer.jumpRight();
    cout << platformer.position() << endl;//// should print 6
    platformer.jumpRight();
    cout << platformer.position() << endl;//// should print 8
    platformer.jumpRight();// should print khong the di chuyen sang phai
    cout << platformer.position() << endl;// should print 8
    platformer.jumpLeft();
    cout << platformer.position() << endl;// should print 5
    platformer.jumpRight();// should print khong the di chuyen sang phai
    cout << platformer.position() << endl;// should print 5
    platformer.jumpLeft();
    cout << platformer.position() << endl;// should print 2
    platformer.jumpLeft();
    cout << platformer.position() << endl;// should print 0
    platformer.jumpLeft();// should print khong the di chuyen sang trai
    cout << platformer.position() << endl;// should print 0
    platformer.jumpRight();
    cout << platformer.position() << endl;// should print 3
    platformer.jumpRight();// should print khong the di chuyen sang phai
    cout << platformer.position() << endl;// should print 3
    platformer.jumpLeft();// should print khong the di chuyen sang trai
    cout << platformer.position() << endl;// should print 3
    
}
#endif
