#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 10, sum = 0, i, j;
        char ch[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> ch[i][j];
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (ch[i][j] == 'X')
                {
                    if (j == 0 || j == 9 || i == 0 || i == 9)
                    {
                        sum += 1;
                    }
                    else if (j == 1 || j == 8 || i == 1 || i == 8)
                    {
                        sum += 2;
                    }
                    else if (j == 2 || j == 7 || i == 2 || i == 7)
                    {
                        sum += 3;
                    }
                    else if (j == 3 || j == 6 || i == 3 || i == 6)
                    {
                        sum += 4;
                    }
                    else if (j == 4 || j == 5 || i == 4 || i == 5)
                    {
                        sum += 5;
                    }
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}