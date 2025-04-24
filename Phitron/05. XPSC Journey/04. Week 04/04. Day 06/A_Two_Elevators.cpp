#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll a, b, c;
        cin >> a >> b >> c;
        
        ll d1 = abs(a - 1);
        ll d2 = abs(b - c) + abs(c - 1);
        
        if( d1 < d2)
            cout << 1 << endl;
        else if(d1 > d2)
            cout << 2 << endl;
        else
            cout << 3 << endl;
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