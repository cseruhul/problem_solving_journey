#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, zero = 0, one = 0;
        cin >> n;
        string bin;
        cin >> bin;
        int l = 0, r = 0;

        while (r < n)
        {
            if (bin[r] == '1')
                one++;
            if (bin[r] == '0')
            {
                if (r == n - 1)
                    zero++;
                r++;
            }
            else
            {
                if (r - l > 0)
                    zero++;
                r++;
                l = r;
            }
        }
        if (zero >= one)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

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