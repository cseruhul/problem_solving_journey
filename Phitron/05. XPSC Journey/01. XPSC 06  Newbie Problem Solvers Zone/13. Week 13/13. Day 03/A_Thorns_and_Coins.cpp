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
        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            if (str[i] == '@')
                ans++;

            if (str[i] == '*' && str[i - 1] == '*')
                break;
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