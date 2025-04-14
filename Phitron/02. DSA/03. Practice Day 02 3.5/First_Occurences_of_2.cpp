#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &num, int n, int item)
{
    int ans = -1;
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - 1) / 2;

        if (num[mid] == item)
        {
            ans = mid;
            // r = mid - 1;
            l = mid + 1;
        }
        else if (num[mid] > item)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, item;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cin >> item;

    int ans = binarySearch(nums, n, item);

    if (ans == -1)
        cout << "Data not found";
    else
        cout << "Data is at index (" << ans << ")";

    return 0;
}