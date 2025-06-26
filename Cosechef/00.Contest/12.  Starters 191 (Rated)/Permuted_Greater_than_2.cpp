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
        int x, y, z;

        cin >> x >> y >> z;

        if (x == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (y == 0)
            {
                if (x - 1 <= z)
                    cout << "Yes" << endl;
                else
                    cout << "No" << endl;
            }
            else
            {
                if (x <= z)
                    cout << "Yes" << endl;
                else
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