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

        int A, B, C, D;

        if (n % 2 == 0)
        {
            A = n / 2;
            B = n / 2;

            if (c > d)
            {
                C = A * (A + 1) / 2;
                D = (A - 1) * A / 2;
            }
            else
            {
                C = (A - 1) * A / 2;
                D = A * (A + 1) / 2;
            }
        }
        else
        {
            if (a > b)
            {
                B = n / 2;
                A = n - B;
                if (c > d)
                {
                    C = A * (A + 1) / 2;
                    D = (A - 1) * A / 2;
                }
                else
                {
                    C = (A - 1) * A / 2;
                    D = A * (A + 1) / 2;
                }
            }
            else
            {
                A = n / 2;
                B = n - B;
                if (c > d)
                {
                    C = B * (B + 1) / 2;
                    D = (B - 1) * B / 2;
                }
                else
                {
                    C = (B - 1) * B / 2;
                    D = B * (B + 1) / 2;
                }
            }
        }

        int ans = a * A + B * b + c * C + d * D;
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