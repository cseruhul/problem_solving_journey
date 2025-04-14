#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        string str;
        cin >> n >> str;

        int l = 0, r = n - 1;

        while (l <= r)
        {
            if (str[l] == 'W')
                l++;
            if (str[r] == 'W')
                r--;

            if (str[l] == 'B' && str[r] == 'B')
            {
                cout << r - l + 1 << endl;
                break;
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