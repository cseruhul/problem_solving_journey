#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    vector<ll> arr;
    ll n, k;
    bool bin_search(ll key)
    {
        ll l = 0, r = n - 1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            if (arr[mid] == key)
                return true;
            if (key > arr[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return false;
    }
    void solve()
    {
        cin >> n >> k;

        arr.resize(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        while (k--)
        {
            ll key;
            cin >> key;
            if (bin_search(key))
            {
                cout << "YES" << newline;
            }
            else
            {
                cout << "NO" << newline;
            }
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