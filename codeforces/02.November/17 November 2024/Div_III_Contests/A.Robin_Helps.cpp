#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, total = 0;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        int person[n + 1];
        int count = 0;
        total = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> person[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if (person[i] == 0 && total > 0)
            {
                count++;
                total--;
            }

            if (person[i] >= k)
            {
                total += person[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}