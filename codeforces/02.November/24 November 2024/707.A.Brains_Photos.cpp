#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag = 0;

    cin >> n >> m;

    char color[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> color[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (color[i][j] == 'C' || color[i][j] == 'M' || color[i][j] == 'Y')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "#Color" << endl;
    }
    else
    {
        cout << "#Black&White" << endl;
    }

    return 0;
}