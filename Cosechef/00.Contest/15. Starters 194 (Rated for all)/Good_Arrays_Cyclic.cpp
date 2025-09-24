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

        vector<string> bin_v(n);

        for (int i = 0; i < n; i++)
        {
            string item;
            cin >> item;
            bin_v[i] = item;
        }

        ll total_val = 1;
        ll balance = 1;

        for (int i = 0; i < n; i++)
        {
            int one = 0;
            for (char ch : bin_v[i])
            {
                if (ch == '1')
                    one++;
            }

            total_val = total_val * one % MOD;
        }

        ll N = n / 2;

        for (int i = 0; i < N; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (bin_v[i][j] == '1' and bin_v[i + N][j] == '1')
                {
                    cnt++;
                }
            }

            balance = balance * cnt % MOD;
        }

        ll result = total_val - balance;

        if (result < 0)
            result += MOD;

        cout << result << newline;
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