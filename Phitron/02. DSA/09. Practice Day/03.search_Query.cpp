#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int item)
{
    int flag = 0;
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == item)
        {
            flag = 1;
            break;
        }
        else if (arr[mid] > item)
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

int main()
{
    int n, q, number;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    cin >> q;

    while (q--)
    {
        cin >> number;
        cout << number << " ";
        int flag = binarySearch(nums, n, number);

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}