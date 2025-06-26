#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans = 0;
        cin >> n;
        int min_val = INT_MAX, max_val = INT_MIN;
        // vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            min_val = min(min_val, x);
            max_val = max(max_val, x);
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans += max_val - min_val;
        }

        cout << ans << endl;
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