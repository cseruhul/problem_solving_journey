#include <bits/stdc++.h>
using namespace std;

/*
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int flag = -1, ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                cout << "flag = " << i << endl;
                flag = i;
                break;
            }
        }

        if (flag == -1)
        {
            ans = nums.size();
        }
        else
        {
            ans = flag;
        }

        return ans;
    }
};



*/

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int flag = -1, ans, mid;
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            if (mid == nums[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (nums[mid] == mid)
            ans = mid + 1;
        else
            ans = mid;
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
        int ans = obj.missingNumber(nums);

        cout << ans << endl;
    }

    return 0;
}