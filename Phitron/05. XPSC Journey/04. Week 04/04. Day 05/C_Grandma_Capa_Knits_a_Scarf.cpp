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
        string s;
        cin >> s;
        int ans = INT_MAX;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int l = 0, r = n - 1, cnt = 0;

            while (l <= r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == ch)
                    {
                        cnt++;
                        l++;
                    }
                    else if (s[r] == ch)
                    {
                        cnt++;
                        r--;
                    }
                    else
                    {
                        cnt = INT_MAX;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, cnt);
        }

        if (ans == INT_MAX)
            cout << -1 << endl;
        else
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