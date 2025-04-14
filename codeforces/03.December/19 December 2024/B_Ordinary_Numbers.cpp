#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;

        for (long long i = 1; i <= n; i = i * 10 + 1)
        {
            for (int d = 1; d <= 9; d++)
            {
                if (i * d <= n)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}