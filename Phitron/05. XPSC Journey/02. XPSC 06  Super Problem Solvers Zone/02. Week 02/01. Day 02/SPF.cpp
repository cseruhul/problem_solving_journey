#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        map<int, int> prime_factor;

        for (int i = 2; i * i <= n; i++)
        {

            while (n % i == 0)
            {
                prime_factor[i]++;
                n /= i;
            }
        }

        if (n > 1)
            prime_factor[n]++;

        for (auto item : prime_factor)
        {
            cout << item.first << " " << item.second << newline;
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