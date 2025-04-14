#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int x;
        cin >> x;

        if ((100 - x) % 10 == 0)
            cout << 100 - x << endl;
        else
        {
            cout << (100 - x) - (100 - x) % 10 << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}