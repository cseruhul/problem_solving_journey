#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t, ans;

    cin >> a >> b >> t;

    ans = t / a * b;
    cout << ans;

    return 0;
}