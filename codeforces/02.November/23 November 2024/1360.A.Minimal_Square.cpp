#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, ans;

    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        ans = (a <= b) ? a : b;

        ans += ans;

        ans = max(a, max(ans, b));
        cout << ans * ans << endl;
    }

    return 0;
}