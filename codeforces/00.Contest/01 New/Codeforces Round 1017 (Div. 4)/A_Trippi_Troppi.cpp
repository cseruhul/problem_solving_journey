#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string a, b, c;
        cin >> a >> b >> c;

        cout << a[0] << b[0] << c[0] << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}