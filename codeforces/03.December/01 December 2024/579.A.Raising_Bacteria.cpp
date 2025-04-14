#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, ans = 0;

    cin >> x;

    while (x)
    {
        if (x % 2 == 1)
        {
            ans++;
        }

        x = x / 2;
    }

    cout << ans;

    return 0;
}