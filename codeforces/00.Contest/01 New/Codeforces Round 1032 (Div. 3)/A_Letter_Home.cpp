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
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int mn = min(s - min(s, arr[0]), max(arr[n - 1], s) - s);
        int mx = max(s - min(s, arr[0]), max(arr[n - 1], s) - s);
        int ans = mn * 2 + mx;
        cout << ans << newline;
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