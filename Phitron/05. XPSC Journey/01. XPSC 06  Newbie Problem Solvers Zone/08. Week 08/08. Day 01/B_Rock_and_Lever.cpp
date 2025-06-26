#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int maxN = 30;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(maxN);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            arr[__lg(x)]++;
        }

        ll ans = 0;

        for (int i = 0; i < maxN; i++)
        {
            ll N = 1LL * arr[i];
            ans += N * (N - 1) / 2;
        }

        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}