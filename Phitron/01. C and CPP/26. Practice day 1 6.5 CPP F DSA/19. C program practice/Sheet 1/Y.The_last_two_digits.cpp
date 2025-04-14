#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ans, a, b, c, d;
    cin >> a >> b >> c >> d;

    ans = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;

    if (ans < 10)
        cout << "0" << ans;
    else
        cout << ans;
    return 0;
}