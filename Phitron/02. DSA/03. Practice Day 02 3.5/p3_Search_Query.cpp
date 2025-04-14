#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // for (auto item : arr)
    // {
    //     cout << item << " ";
    // }
    int q;
    cin >> q;

    while (q--)
    {
        int num, flag = 0;
        cin >> num;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == num)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > num)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}