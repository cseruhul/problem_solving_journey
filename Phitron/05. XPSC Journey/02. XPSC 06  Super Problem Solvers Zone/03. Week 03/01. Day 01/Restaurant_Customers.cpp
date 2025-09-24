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

        map<ll, int> arr;
        for (int i = 0; i < n; i++)
        {
            ll l, r;
            cin >> l >> r;

            arr[l]++;
            arr[r + 1]--;
        }

        int sum = 0, ans = 0;
        for (auto item : arr)
        {
            sum += item.second;

            ans = max(sum, ans);
        }

        cout << ans << newline;
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