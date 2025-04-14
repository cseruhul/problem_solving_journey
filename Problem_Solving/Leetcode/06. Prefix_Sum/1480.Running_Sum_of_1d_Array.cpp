#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);

        ans[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            ans[i] = ans[i - 1] + nums[i];
        }

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

        vector<int> ans;

        ans = obj.runningSum(nums);

        for (auto item : ans)
            cout << item << " ";

        cout << endl;
    }

    return 0;
}