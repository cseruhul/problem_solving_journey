#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, x;
        cin >> n >> x;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (i != x)
                ans.push_back(i);
        }
        ans.push_back(x);

        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";

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