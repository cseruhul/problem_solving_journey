#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> pascal;

    for (int i = 0; i < n; i++)
    {
        vector<int> rows;
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                rows.push_back(1);
            else
            {
                rows.push_back(pascal[i - 1][j - 1] + pascal[i - 1][j]);
            }
        }
        pascal.push_back(rows);
    }

    for (auto rows : pascal)
    {
        for (auto item : rows)
            cout << item << " ";
        cout << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << pascal[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}