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

        int odd = 0, even = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }

        cout << odd << " " << even << newline;
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