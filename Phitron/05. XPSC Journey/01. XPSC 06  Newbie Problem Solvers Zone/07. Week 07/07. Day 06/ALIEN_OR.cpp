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
        vector<string> nums(n);
        vector<bool> bit_sets(k + 1, false);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        for (auto item : nums)
        {
            int no_one = 0, pos_one;
            for (int i = 0; i < item.size(); i++)
            {
                if (item[i] == '1')
                {
                    no_one++;
                    pos_one = i;
                }
            }

            if (no_one == 1)
            {
                bit_sets[pos_one + 1] = true;
            }
        }
        bool flag = true;

        for (int i = 1; i <= k; i++)
        {
            if (bit_sets[i] == false)
            {
                // cout << bit_sets[i];
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";

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