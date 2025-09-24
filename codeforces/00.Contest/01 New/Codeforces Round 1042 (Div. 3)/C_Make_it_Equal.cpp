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

        vector<ll> arr_a(n);
        vector<ll> arr_b(n);

        for (int i = 0; i < n; i++)
            cin >> arr_a[i];

        for (int i = 0; i < n; i++)
            cin >> arr_b[i];

        for (int i = 0; i < n; i++)
        {
            ll result1 = arr_a[i] % k;
            ll result2 = (k - result1) % k;

            arr_a[i] = min(result1, result2);
        }

        for (int i = 0; i < n; i++)
        {
            ll result1 = arr_b[i] % k;
            ll result2 = (k - result1) % k;

            arr_b[i] = min(result1, result2);
        }

        sort(arr_a.begin(), arr_a.end());
        sort(arr_b.begin(), arr_b.end());

        if (arr_a == arr_b)
        {
            cout << "YES" << newline;
        }
        else
        {
            cout << "NO" << newline;
        }
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