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

        int ans = 0;
        int no_of_cars = n / 4;
        n = n % 4;

        if (n == 0)
        {
            ans = no_of_cars * 400;
        }
        else if (n == 1)
        {
            if (no_of_cars >= 1)
                ans = (no_of_cars - 1) * 400 + 300 + 200;
            else
                ans = 200;
        }
        else if (n == 2)
        {
            ans = no_of_cars * 400 + 200;
        }
        else
        {
            ans = no_of_cars * 400 + 300;
        }

        cout << ans << newline;
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