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
        int n, m;
        string a, b, pattern;
        cin >> n;

        cin >> a;
        cin >> m;
        cin >> b >> pattern;

        // cout << n << newline << a << newline << m << newline << b << newline << pattern << newline;
        string ans = a;
        for (int i = 0; i < m; i++)
        {
            if (pattern[i] == 'V')
            {
                ans = b[i] + ans;
            }
            else if (pattern[i] == 'D')
            {
                ans = ans + b[i];
            }
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