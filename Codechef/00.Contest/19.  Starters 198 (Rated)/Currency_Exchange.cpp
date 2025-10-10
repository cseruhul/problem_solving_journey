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
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        int initial_coin = 5 * a1 + b1;
        int final_coin = 5 * a2 + b2;

        int coin = initial_coin - final_coin;

        if (coin >= 0 && coin % 6 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
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