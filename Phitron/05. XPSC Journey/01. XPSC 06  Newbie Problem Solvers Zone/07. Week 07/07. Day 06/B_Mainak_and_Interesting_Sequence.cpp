#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m;
        cin >> n >> m;

        if (n > m)
        {
            cout << "No" << endl;
            return;
        }
        else
        {
            if (n % 2)
            {
                cout << "Yes" << endl;
                for (ll i = 1; i <= (n - 1); i++)
                {
                    cout << 1 << " ";
                }

                cout << m - n + 1 << endl;
            }
            else if (n % 2 == 0 && m % 2 == 0)
            {
                cout << "Yes" << endl;
                for (ll i = 1; i <= (n - 2); i++)
                {
                    cout << 1 << " ";
                }
                ll last_occur = (m - n + 2) / 2;
                cout << last_occur << " " << last_occur << endl;
            }
            else if ((n % 2 == 0) && (m % 2 == 1))
            {
                cout << "No" << endl;
            }
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