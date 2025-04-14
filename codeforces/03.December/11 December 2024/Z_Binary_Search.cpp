#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> &nums, int num)
    {
        int flag = 0;
        int l = 0;
        int r = nums.size();

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] == num)
            {
                flag = 1;
                break;
            }
            else if (num < nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        return flag;
    }
};

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    while (q--)
    {
        int x;
        cin >> x;
        int flag;

        Solution obj;
        flag = obj.binarySearch(nums, x);

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}