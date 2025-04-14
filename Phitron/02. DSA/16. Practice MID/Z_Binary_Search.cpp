#include <bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &arr, int n, int item)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == item)
        {
            return true;
        }
        else if (item < arr[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return false;
}

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    while (q--)
    {
        int number;
        cin >> number;

        if (binarySearch(arr, n, number))
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