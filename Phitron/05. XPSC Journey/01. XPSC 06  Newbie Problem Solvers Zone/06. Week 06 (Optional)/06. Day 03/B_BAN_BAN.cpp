#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<pair<int, int>> ans;
        int l = 1, r = 3 * n;

        while (l <= r)
        {
            ans.push_back({l, r});
            l += 3;
            r -= 3;
        }
        int sz = ans.size();
        cout << sz << endl;

        for (auto item : ans)
            cout << item.first << " " << item.second << endl;
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