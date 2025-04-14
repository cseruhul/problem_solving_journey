#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = INT_MAX, min_idx, max_idx;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ans > abs(arr[i] - arr[j]))
            {
                ans = abs(arr[i] - arr[j]);
                min_idx = i;
                max_idx = j;
            }
        }
    }

    cout << min_idx + 1 << " " << max_idx + 1;

    return 0;
}