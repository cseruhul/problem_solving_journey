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
        int a, b;
        cin >> a >> b;

        if (a == b)
            cout << 0 << newline;
        else if (a % b == 0 || b % a == 0)
            cout << 1 << newline;
        else
            cout << 2 << newline;
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