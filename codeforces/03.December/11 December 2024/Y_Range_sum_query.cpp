#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> nums(n);
    vector<long long int> c_sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    c_sum[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        c_sum[i] = c_sum[i - 1] + nums[i];
    }

    // for (auto item : c_sum)
    //     cout << item << " ";

    while (q--)
    {
        int l, r;
        long long ans;
        cin >> l >> r;
        l--;
        r--;

        if (l == 0)
        {
            ans = c_sum[r];
        }
        else
        {
            ans = c_sum[r] - c_sum[l - 1];
        }

        cout << ans << endl;
    }

    return 0;
}