#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, ans;
    bool flag = false;

    cin >> a >> b >> c;

    int i = 1;
    ans = i * c;

    while (ans <= b)
    {
        if (ans >= a && ans <= b)
        {
            flag = true;
            break;
        }
        ans = ++i * c;
    }

    if (flag)
        cout << ans;
    else
        cout << -1;
    return 0;
}