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
        int n1, n2;
        cin >> n1 >> n2;
        string str1, str2;
        cin >> str1 >> str2;

        int ans = 0;

        int l = 0, r = 0;

        while (l < n1 && r < n2)
        {
            if (str1[l] == str2[r])
            {
                ans++;
                l++;
            }
            r++;
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