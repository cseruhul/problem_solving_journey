#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll binary_search(vector<ll> &arr, ll n, ll key)
    {
        ll l = 0, r = n - 1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (arr[mid] == key)
            {
                r = mid - 1;
            }
            else if (key > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return l + 1;
    }

    void solve()
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        while (k--)
        {
            ll key;
            cin >> key;

            cout << binary_search(arr, n, key) << newline;
        }
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