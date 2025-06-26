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
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        ll total = n * (n + 1) / 2;
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        k = k % (n + 1);

        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ll missing = total - sum;
                sum -= arr[j];
                sum += missing;
                arr[j] = missing;
            }
        }

        for (auto item : arr)
            cout << item << " ";
        cout << newline;
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