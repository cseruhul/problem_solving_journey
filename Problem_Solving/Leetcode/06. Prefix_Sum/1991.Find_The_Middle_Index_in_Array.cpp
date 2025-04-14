#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int ans = -1;
        int n = nums.size();

        vector<int> left(n);
        vector<int> right(n);

        left[0] = nums[0];
        right[n - 1] = nums[n - 1];

        for (int i = 1; i < n; i++)
        {
            left[i] = left[i - 1] + nums[i];
        }

        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = right[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (left[i] == right[i])
            {
                ans = i;
                break;
            }
        }

        // for (auto item : nums)
        //     cout << item << " ";
        // cout << endl;

        // for (auto item : left)
        //     cout << item << " ";
        // cout << endl;

        // for (auto item : right)
        //     cout << item << " ";
        // cout << endl;

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        Solution obj;
        int ans = obj.findMiddleIndex(nums);

        cout << ans << endl;
    }

    return 0;
}