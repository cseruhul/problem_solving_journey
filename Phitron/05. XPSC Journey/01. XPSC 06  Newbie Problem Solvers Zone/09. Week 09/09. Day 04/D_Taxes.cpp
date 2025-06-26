#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    bool is_prime(ll n)
    {
        bool flag = true;
        if (n < 1)
            return false;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
        }

        return flag;
    }

    void solve()
    {
        ll n;
        cin >> n;

        if (is_prime(n))
        {
            cout << 1 << endl;
        }
        else if (n % 2 == 0 || is_prime(n - 2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
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