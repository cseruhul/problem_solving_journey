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
        string str;
        cin >> n;
        cin >> str;

        int l_idx = 1, r_idx = 1;
        while (l_idx < n)
        {
            if (str[l_idx] != str[0])
                break;
            l_idx++;
        }

        while (r_idx < n)
        {
            if (str[n - r_idx - 1] != str[n - 1])
                break;
            r_idx++;
        }

        ll ans;
        bool flag = false;

        if (str[0] == str[n - 1])
        {
            if (l_idx + r_idx > n)
                ans = n;
            else
                ans = l_idx + r_idx;
        }
        else
        {
            for (int i = l_idx; !flag && (i <= n - r_idx - 1); i++)
            {
                if (str[i] == str[0])
                    flag = true;
            }

            ans = l_idx + r_idx + flag;
        }

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