#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, even = 0, odd = 0;
        cin >> n;

        // if (n % 2 == 1)
        // {
        //     cout << "-1" << endl;
        //     continue;
        // }

        for (int i = 0; i < n; i++)
        {
            int number;
            cin >> number;

            if (number % 2 == 0)
                even++;
            else
                odd++;
        }

        if (n % 2 == 1)
            cout << "-1" << endl;
        else
            cout << abs(even - odd) / 2 << endl;
    }

    return 0;
}