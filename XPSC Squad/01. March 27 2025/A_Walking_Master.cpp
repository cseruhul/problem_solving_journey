#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll a, b, c, d, diagonal_dist, left_distance;
        cin >> a >> b >> c >> d;

        diagonal_dist = d - b;

        if (diagonal_dist < 0 || c - a > diagonal_dist)
        {
            cout << -1 << endl;
        }
        else
        {
            left_distance = a + diagonal_dist - c;
            cout << diagonal_dist + left_distance << endl;
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