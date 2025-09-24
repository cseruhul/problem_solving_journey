#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll k;
        ull x;
        cin >> k >> x;

        ull total = 1ULL << (k + 1);
        ull a = x;
        ull b = total - x;

        vector<int> ans;

        while (a != b)
        {
            if (a < b)
            {
                ans.push_back(1);
                b -= a;
                a += a;
            }
            else
            {
                ans.push_back(2);
                a -= b;
                b += b;
            }
        }

        cout << ans.size() << newline;

        for (auto item = ans.rbegin(); item != ans.rend(); item++)
        {
            cout << *item << " ";
        }

        cout << newline;
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