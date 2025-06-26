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

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<ll> prefix(n);

        prefix[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        ll q;
        cin >> q;

        while (q--)
        {
            ll qm;
            cin >> qm;

            auto lb = lower_bound(prefix.begin(), prefix.end(), qm);

            cout << (lb - prefix.begin() + 1) << newline;
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