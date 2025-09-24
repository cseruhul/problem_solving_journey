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
        string str;
        cin >> str;

        ll state = 0, k;

        for (int i = 1; i <= 1 << n; i++)
        {
            k = 0;
            while (k <= n)
            {
                if (str[(state & (1 << k)) - 1] == '0')
                {
                    state = (state & (1 << k)) - 1;
                    // break;
                }
                k++;
            }
            cout << state << newline;
        }
        cout << newline;
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