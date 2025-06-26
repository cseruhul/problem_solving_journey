#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> arr(n);

        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;

            arr[i].first = a;
            arr[i].second = b;
        }

        sort(arr.begin(), arr.end(), [](pair<int, int> a, pair<int, int> b)
             { return a.second < b.second; });

        vector<pair<ll, ll>> soln;
        soln.push_back({-1, -1});

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if ((*soln.rbegin()).second <= arr[i].first)
            {
                ans++;
                soln.push_back(arr[i]);
            }
        }

        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}