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
        int n, k;
        string bin_str;
        cin >> n >> k;
        cin >> bin_str;

        bool flag = false;
        int current_val = 0;

        for (int i = 0; i < n; i++)
        {
            if (bin_str[i] == '1')
            {
                current_val++;
                if (current_val >= k)
                {
                    flag = true;
                    break;
                }
            }
            else
            {
                current_val = 0;
            }
        }

        if (flag)
        {
            cout << "NO" << newline;
            return;
        }

        cout << "YES" << newline;
        vector<int> zero;
        vector<int> one;

        for (int i = 0; i < n; i++)
        {
            if (bin_str[i] == '0')
                zero.push_back(i);
            else
                one.push_back(i);
        }

        int N = n;
        vector<int> ans(n);
        for (auto item : zero)
            ans[item] = N--;

        for (auto item : one)
            ans[item] = N--;

        for (int i = 0; i < n; i++)
        {
            if (i)
                cout << " ";
            cout << ans[i];
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