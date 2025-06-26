#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum, mult, ans = 0;

    cin >> sum >> mult;

    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 100; k++)
            {
                if (i + j + k <= sum && i * j * k <= mult)
                    ans++;
            }
        }
    }

    cout << ans;

    return 0;
}