#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    bool is_triangle_possible(int a, int b, int c)
    {
        if (a + b > c and a + c > b and b + c > a)
            return true;
        else
            return false;
    }
    void solve()
    {
        ll n, perimeter = -1;

        cin >> n;

        ll a = n, b = n - 1, c = n - 2;

        if (is_triangle_possible(a, b, c))
        {
            perimeter = max(perimeter, a + b + c);
        }

        cout << perimeter << endl;
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