#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (abs(a - b) % 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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