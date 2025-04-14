#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int melodies[n], flag = 1, interval;

        for (int i = 0; i < n; i++)
        {
            cin >> melodies[i];
        }

        for (int i = 1; i < n; i++)
        {
            interval = abs(melodies[i] - melodies[i - 1]);
            if (interval != 5 && interval != 7)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}