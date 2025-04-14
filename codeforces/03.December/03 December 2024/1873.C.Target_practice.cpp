#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n = 10, count = 0, sum = 0, i, j;
        char ch[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> ch[i][j];
            }
        }

        for (i = 0; i < n / 2; i++)
        {
            count = 0;
            for (j = 0; j < n; j++)
            {
                if (ch[i][j] == 'X')
                    count++;
            }
            
        }

        for (i = n / 2; i < n; i++)
        {
            count = 0;
            for (j = 0; j < n; j++)
            {
                if (ch[i][j] == 'X')
                    count++;
            }
            sum += count * (n - i);
        }

        cout << sum << endl;
    }

    return 0;
}