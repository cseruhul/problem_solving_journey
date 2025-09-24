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
        int x, y;
        cin >> x >> y;

        map<int, bool> disc_surface;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                disc_surface[y + y + i + j] = true;
            }
        }

        int rest = 50 - x;

        if (disc_surface.find(rest) == disc_surface.end())
        {
            cout << "No" << newline;
        }
        else
        {
            cout << "Yes" << newline;
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