#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, m, sum = 0;
    cin >> n >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> m;

    if (n <= m)
    {
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
    }
    else if (m < n)
    {
        for (int i = 0; i < m; i++)
        {
            sum += arr[i];
        }
    }

    if (m > n)
    {
        sum -= (m - n) * d;
    }

    cout << sum;

    return 0;
}