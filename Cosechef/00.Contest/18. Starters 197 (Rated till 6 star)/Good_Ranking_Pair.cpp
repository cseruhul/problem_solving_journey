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
        cout << 2 << newline;

        for (int i = 1; i <= n; i++)
        {
            cout << i;
            if (i == n)
            {
                cout << newline;
            }
            else
            {
                cout << " ";
            }
        }

        for (int i = n; i >= 1; i--)
        {
            cout << i;
            if (i == 1)
            {
                cout << newline;
            }
            else
            {
                cout << " ";
            }
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}