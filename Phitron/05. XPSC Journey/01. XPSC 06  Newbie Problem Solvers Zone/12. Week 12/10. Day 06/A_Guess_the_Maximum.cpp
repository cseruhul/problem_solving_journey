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

        for (auto &item : arr)
            cin >> item;

        ll mini = max(arr[0], arr[1]);

        for (int i = 1; i < n - 1; i++)
        {
            mini = min(mini, max(arr[i], arr[i + 1]));
        }

        cout << mini - 1 << newline;
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