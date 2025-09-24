#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Block
{
public:
    int l, r, w;

    bool operator<(const Block &obj)
    {
        if (r != obj.r)
            return r < obj.r;
        return r < obj.l;
    }
};

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<vector<int>> position(n + 1);
        for (int i = 0; i < n; i++)
        {
            position[arr[i]].push_back(i);
        }

        vector<Block> blocks;
        blocks.reserve(n);

        for (int i = 1; i <= n; i++)
        {
            const auto &p = position[i];
            int c = (int)p.size();

            for (int j = i; j <= c; j++)
            {
                blocks.push_back({p[j - i], p[j - 1], i});
            }
        }

        if (blocks.empty())
        {
            cout << "0" << newline;
            return;
        }

        sort(blocks.begin(), blocks.end());

        int m = (int)blocks.size();

        vector<int> dp(m + 1, 0);
        vector<int> final_val(m);
        vector<int> begin_val(m);
        vector<int> weight_val(m);

        for (int i = 0; i < m; i++)
        {
            begin_val[i] = blocks[i].l;
            final_val[i] = blocks[i].r;
            weight_val[i] = blocks[i].w;
        }

        for (int i = 1; i <= m; i++)
        {
            int left = begin_val[i - 1];
            int j_val = int(lower_bound(final_val.begin(), final_val.end(), left) - final_val.begin());

            dp[i] = max(dp[i - 1], dp[j_val] + weight_val[i - 1]);
        }

        cout << dp[m] << newline;
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