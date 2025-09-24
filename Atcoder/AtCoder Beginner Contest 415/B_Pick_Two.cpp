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
        string str;
        cin >> str;
        int n = str.size();

        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '#')
                ans.push_back(i + 1);
        }
        // for (auto item : ans)
        //     cout << item << " ";
        // cout << newline;

        for (int i = 1; i < ans.size(); i += 2)
        {
            cout << ans[i - 1] << "," << ans[i] << newline;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}