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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int ans;
        int A = n / 2;
        int B = n - A;

        if (a > b)
        {
            A = max(A, B);
            B = n - A;
        }
        else
        {
            B = max(A, B);
            A = n - B;
        }
        ans = a * A + b * B + (max(c, d) * A * B);

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