#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int x;
        cin >> x;

        int set_bit = (__lg(x)) + 1;
        vector<int> ans(31, 0);

        ans[set_bit] = 1;
        int diff = (1 << set_bit) - x;

        for (int k = __lg(diff); k >= 0; k--)
        {
            if ((diff >> k) & 1)
            {
                ans[k] = -1;
            }
        }

        cout << ans.size() << endl;
        for (auto item : ans)
            cout << item << " ";
        cout << endl;
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