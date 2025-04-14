#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min_i = INT_MAX, max_i = INT_MIN, diff;

    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        min_i = INT_MAX, max_i = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                diff = abs(arr[i] - arr[j]);
                // cout << diff << endl;
                if (diff < min_i)
                {
                    min_i = diff;
                }
                if (diff > max_i)
                {
                    max_i = diff;
                }
            }
        }
        cout << min_i << " " << max_i << endl;
    }

    return 0;
}