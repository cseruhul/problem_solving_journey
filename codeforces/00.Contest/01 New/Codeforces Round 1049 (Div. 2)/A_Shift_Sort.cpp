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
        string str;
        int n;
        cin >> n;
        cin >> str;

        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
                zero++;
        }

        int ans = 0;
        for (int i = 0; i < zero; i++)
        {
            if (str[i] == '1')
            {
                ans++;
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