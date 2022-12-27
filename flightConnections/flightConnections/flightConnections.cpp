#include <iostream>
#include <vector>

using namespace std;
int getMinimumConnections(const vector<vector<bool>>& matrix)
{
    int min = 0;
    vector<int> result;
    return min;
}

#ifndef RunTests
int main()
{
    int min = 0;
    vector<int> result;
    vector<vector<bool>> matrix{
        {false, true, true, false, true},
        {true, false, false, false, false},
        {true, false, false, true, false},
        {false, false, true, false, false},
        {true, false, false, false, false}
    };
    for (int i = 0; i < matrix.size(); i++)
    {
        result.push_back(0);
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            if (matrix[i][j] == true)
            {
                result[i] += 1;
                if ((matrix[j][i] == true) && (i < j))
                {
                    result[j] -= 1;
                }

            }
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] > 0)
        {
            min += 1;
        }

    }
    min -= 1;
    cout << min << endl;

}
#endif