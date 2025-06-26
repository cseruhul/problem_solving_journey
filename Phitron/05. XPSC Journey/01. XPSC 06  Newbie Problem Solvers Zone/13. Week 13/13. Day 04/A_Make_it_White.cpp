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

        string color;
        cin >> color;

        int l = 0, r = n - 1;

        while (l <= r)
        {
            if (color[l] == 'W')
                l++;
            if (color[r] == 'W')
                r--;

            if (color[l] == 'B' && color[r] == 'B')
                break;
        }

        cout << r - l + 1 << newline;
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