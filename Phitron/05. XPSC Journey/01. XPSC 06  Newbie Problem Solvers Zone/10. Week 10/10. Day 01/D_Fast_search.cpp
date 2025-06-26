#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    ll find_left_index(vector<ll> &arr, ll n, int key)
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
        return l;
    }

    ll find_right_index(vector<ll> &arr, ll n, int key)
    {
        ll l = 0, r = n - 1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (key >= arr[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return l;
    }

    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll k;
        cin >> k;

        while (k--)
        {
            ll left, right;
            cin >> left >> right;

            cout << abs(find_left_index(arr, n, left) - find_right_index(arr, n, right)) << " ";
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