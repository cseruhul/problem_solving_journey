#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        vector<int> prefix_sum(nums.size());
        prefix_sum[0] = nums[0];

        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = nums[i] + prefix_sum[i - 1];
        }

        ans = *min_element(prefix_sum.begin(), prefix_sum.end());

        if (ans < 1)
            ans = abs(ans) + 1;
        else if (ans > 1)
            ans = 1;

        // for (auto item : prefix_sum)
        //     cout << item << " ";

        // cout << endl;
        return ans;
    }
};

int main()
{
    // vector<int> nums{-3, 2, -3, 4, 2};
    // vector<int> nums{1, 2};
    // vector<int> nums{1, -2, -3};
    // vector<int> nums{2, 3, 5, -5, -1};
    vector<int> nums{7, 1, 3, 6, 5, 6};
    Solution obj;

    int ans = obj.minStartValue(nums);
    cout << ans;

    return 0;
}