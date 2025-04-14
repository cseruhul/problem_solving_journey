#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t, n;
        cin >> t;

        while (t--)
        {
            cin >> n;
            if (n % 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
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