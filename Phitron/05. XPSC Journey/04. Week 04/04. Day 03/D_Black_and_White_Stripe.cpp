#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        string strip;
        cin >> strip;

        int l = 0, r = 0;
        int ans = INT_MAX, white = 0;

        while (r < n)
        {
            if (strip[r] == 'W')
            {
                white++;
            }

            if (r - l + 1 == k)
            {
                ans = min(ans, white);
                if (strip[l] == 'W')
                    white--;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }

        cout << ans << endl;
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