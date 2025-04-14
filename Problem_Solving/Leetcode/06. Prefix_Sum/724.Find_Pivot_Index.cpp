#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int ans = -1;
        int n = nums.size();

        vector<int> l_sum(n);
        vector<int> r_sum(n);

        l_sum[0] = nums[0];
        r_sum[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++)
        {
            l_sum[i] = nums[i] + l_sum[i - 1];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            r_sum[i] = nums[i] + r_sum[i + 1];
        }

        // for (auto item : nums)
        //     cout << item << " ";

        // cout << endl;

        // for (auto item : l_sum)
        //     cout << item << " ";

        // cout << endl;
        // for (auto item : r_sum)
        //     cout << item << " ";

        // cout << endl;

        for (int i = 0; i < n; i++)
        {
            if (l_sum[i] == r_sum[i])
            {
                ans = i;
                break;
            }
        }

        return ans;
    }
};

int main()
{
    // vector<int> nums = {1, 7, 3, 6, 5, 6};
    // vector<int> nums = {1, 2, 3};
    vector<int> nums = {2, 1, -1};

    Solution obj;

    int ans = obj.pivotIndex(nums);

    cout << ans;

    return 0;
}