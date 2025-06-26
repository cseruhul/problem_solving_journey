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
        int n;
        ll x;
        cin >> n >> x;

        vector<pair<ll, int>> arr(n);

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr[i].first = x;
            arr[i].second = i + 1;
        }

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            int l = i + 1, r = n - 1;

            while (l < r)
            {
                ll sum = arr[i].first + arr[l].first + arr[r].first;

                if (sum == x)
                {
                    cout << arr[i].second << " " << arr[l].second << " " << arr[r].second;
                    return;
                }

                if (sum > x)
                    r--;
                else
                    l++;
            }
        }

        cout << "IMPOSSIBLE";
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