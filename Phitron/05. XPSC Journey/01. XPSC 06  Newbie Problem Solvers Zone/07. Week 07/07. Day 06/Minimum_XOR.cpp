#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int all_xor = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            all_xor ^= arr[i];
        }

        int ans = all_xor;

        for (int i = 0; i < n; i++)
        {
            ans = min(ans, all_xor ^ arr[i]);
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