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
        string bin_str;
        cin >> bin_str;

        int one_count = 0, first_one = 0, last_one = 0;
        for (auto ch : bin_str)
        {
            if (ch == '1')
                one_count++;
        }

        if (bin_str[0] == '1')
            first_one = 1;

        if (bin_str[n - 1] == '1')
            last_one = 1;

        int ans = 0;

        ans = 3 * one_count - (first_one + last_one);

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