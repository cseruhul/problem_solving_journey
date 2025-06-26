#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        int x = sqrt(n);

        if (x * x == n)
        {
            int a, b;
            a = x / 2;
            b = x - a;

            if (a + b != x)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << a << " " << b << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
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