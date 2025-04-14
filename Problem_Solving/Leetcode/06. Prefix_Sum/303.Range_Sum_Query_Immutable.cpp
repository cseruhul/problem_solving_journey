#include <bits/stdc++.h>
using namespace std;

class NumArray
{
public:
    vector<int> prefix;
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        // prefix[0] = nums[0];
        prefix.push_back(nums[0]);

        for (int i = 1; i < n; i++)
        {
            // prefix[i] = nums[i] + prefix[i - 1];
            prefix.push_back(nums[i] + prefix[i - 1]);
        }

        // for (auto item : prefix)
        // {
        //     cout << item << " ";
        // }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
        {
            return prefix[right];
        }
        else
        {
            return (prefix[right] - prefix[left - 1]);
        }
    }
};

int main()
{
    int left = 0, right = 2;
    vector<int> nums = {-2, 0, 3, -5, 2, -1};

    NumArray *obj = new NumArray(nums);

    int param_1 = obj->sumRange(left, right);
    cout << param_1 << endl;

    left = 2;
    right = 5;
    param_1 = obj->sumRange(left, right);
    cout << param_1 << endl;

    left = 0;
    right = 5;
    param_1 = obj->sumRange(left, right);
    cout << param_1 << endl;

    return 0;
}