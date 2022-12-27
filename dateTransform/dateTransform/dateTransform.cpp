#include <stdexcept>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> transformDateFormat(const vector<string>& dates)
{
    vector<string> reformat;
    int a, b;
    int j = 0;
    string day, month, year;
    //Loai bo dinh dang khong dung
    for (int i = 0; i < dates.size(); i++)
    {
        a = dates[i].find("-");
        b = dates[i].find("/");
        if ((a > 0) || (b > 0))
        {
            reformat.push_back(dates[i]);
        }
    }
    for (int i = 0; i < reformat.size(); i++)
    {
        a = reformat[i].find("-");
        b = reformat[i].find("/");
        if (a > 0) //dinh dang MM/DD/YYYY
        {
            day = reformat[i].substr(a + 1, 2);
            month = reformat[i].substr(0, 2);
            year = reformat[i].substr(a + 4, 4);
            reformat[i] = year + month + day;
        }
        if (b > 0)
        {
            if (b == 4)//YYYY/MM/DD
            {
                day = reformat[i].substr(b + 4, 2);
                month = reformat[i].substr(b + 1, 2);
                year = reformat[i].substr(0, 4);
                reformat[i] = year + month + day;
            }
            else //DD/MM/YYYY
            {
                day = reformat[i].substr(0, 2);
                month = reformat[i].substr(b + 1, 2);
                year = reformat[i].substr(b + 4, 4);
                reformat[i] = year + month + day;
            }
        }
    }
    return reformat;
}

#ifndef RunTests
int main()
{
    vector<string> dates = { "2010/02/20", "19/12/2016","20130720", "11-18-2012" };
    vector<string> reformattedDates = transformDateFormat(dates);
    for (auto const& reformattedDate : reformattedDates)
    {
        cout << reformattedDate << endl;
    }
}
#endif
