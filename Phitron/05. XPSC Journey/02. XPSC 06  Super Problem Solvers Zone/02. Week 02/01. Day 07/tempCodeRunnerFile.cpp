#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e6 + 7;
vector<bool> prime(MOD, true);

class Ruhul_Amin
{
public:
    void sieve()
    {
        for (int i = 2; i <= MOD; i++)
        {
            for (int j = i + i; j <= MOD; j += i)
            {
                prime[j] = false;
            }
        }
    }
    void solve()
    {
        int a, b, l;
        cin >> a >> b >> l;

        if (prime[l])
        {
            cout << 1 << newline;
        }
        else if (a == b)
        {
            int x = 0;
            int num = l;
            while (num % a == 0)
            {
                x++;
                num = num / a;
            }
            cout << x + 1 << newline;
        }
        else if (prime[a] && prime[b])
        {
            int x_a = 0, y_b = 0;
            int num = l;

            while (num % a == 0)
            {
                x_a++;
                num = num / a;
            }
            while (num % b == 0)
            {
                y_b++;
                num = num / b;
            }

            cout << ((x_a + 1) * (y_b + 1)) << newline;
        }
        else
        {
            int x_a = 0, y_b = 0;
            int num = l;
            while (num % b == 0)
            {
                y_b++;
                num = num / b;
            }
            while (num % a == 0)
            {
                x_a++;
                num = num / a;
            }

            cout << ((x_a + 1) * (y_b + 1)) + 1 << newline;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    ruhul.sieve();
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}