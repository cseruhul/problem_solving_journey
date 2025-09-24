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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll cnt = 0;

        int l = 0, r = 0, dist = 0;

        while (r < n)
        {
            if (arr[r] == 1)
            {
                r++;
                continue;
            }

            l = r;
            while (l < n && arr[l] == 0)
                l++;

            dist = l - r;
            r = l;
            cnt += (dist + 1LL) / (k + 1LL);
        }

        cout << cnt << newline;
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