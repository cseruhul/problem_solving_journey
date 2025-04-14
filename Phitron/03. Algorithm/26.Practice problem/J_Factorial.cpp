#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fact_calc(ll n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * fact_calc(n - 1);
}

int main()
{
    ll n;
    cin >> n;

    ll ans = fact_calc(n);

    cout << ans;

    return 0;
}