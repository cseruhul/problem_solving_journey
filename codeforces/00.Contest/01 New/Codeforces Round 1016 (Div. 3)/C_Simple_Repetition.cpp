#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n == 2)
            return true;
        if (n % 2 == 0)
            return false;

        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }
    void solve()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int x, k;
            cin >> x >> k;

            if (x % 2 == 0 || (x == 1 && k == 1))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
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