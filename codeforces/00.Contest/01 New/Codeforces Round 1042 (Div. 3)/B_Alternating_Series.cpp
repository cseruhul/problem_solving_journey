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

        vector<ll> ans;

        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans.push_back(-1);
                }
                else
                {
                    ans.push_back(3);
                }
            }
        }
        else
        {
            if (n == 2)
            {
                ans.push_back(-1);
                ans.push_back(2);
            }
            else
            {
                for (int i = 0; i < n - 2; i++)
                {
                    if (i % 2 == 0)
                    {
                        ans.push_back(-1);
                    }
                    else
                    {
                        ans.push_back(3);
                    }
                }
                ans.push_back(-1);
                ans.push_back(2);
            }
        }

        for (auto item : ans)
            cout << item << ' ';
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