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

        cout << (n / 2) << newline;
        if (n % 2)
        {
            for (int i = 1; i <= (n / 2) - 1; i++)
            {
                cout << 2 << ' ';
            }
            cout << 3;
        }
        else
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << 2 << ' ';
            }
        }

        cout << newline;
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