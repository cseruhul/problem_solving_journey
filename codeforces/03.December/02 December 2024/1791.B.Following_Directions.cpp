#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        int x = 0, y = 0, flag = 0;
        string str;
        cin >> n;
        cin >> str;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'U')
            {
                y++;
            }
            else if (str[i] == 'D')
            {
                y--;
            }
            else if (str[i] == 'R')
            {
                x++;
            }
            else if (str[i] == 'L')
            {
                x--;
            }

            if (x == 1 && y == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}