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
        vector<int> vase(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vase[i];
        }

        int ans1 = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            int cost = vase[i] / 2 + vase[i - 1];
            ans1 = min(ans1, cost);
        }
        int ans2 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cost = 0;
            for (int j = i + 1; j < n; j++)
            {
                cost = vase[i] + vase[j];
                ans2 = min(ans2, cost);
            }
        }

        cout << min(ans1, ans2) << newline;
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