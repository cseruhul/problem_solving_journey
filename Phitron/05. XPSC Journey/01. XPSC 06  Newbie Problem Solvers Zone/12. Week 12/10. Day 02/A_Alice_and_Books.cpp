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
        cin >> n;

        vector<ll> arr(n);
        ll max_val;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        auto a = max_element(arr.begin(), arr.end());
        int idx = a - arr.begin();

        if (idx == n - 1)
        {
            cout << (*a) + arr[n - 2];
        }
        else
        {
            cout << (*a) + arr[n - 1];
        }
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