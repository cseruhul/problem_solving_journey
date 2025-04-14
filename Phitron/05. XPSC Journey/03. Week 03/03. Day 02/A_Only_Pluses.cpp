#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int a, b, c, minimum;
        cin >> a >> b >> c;

        for (int i = 0; i < 5; i++)
        {
            minimum = min({a, b, c});

            if (minimum == a)
                a++;
            else if (minimum == b)
                b++;
            else
                c++;
        }

        cout << (a * b * c) << endl;
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