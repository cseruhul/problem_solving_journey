#include <bits/stdc++.h>
using namespace std;

double find_max(double a, double b, double c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int l, n;
    double diff = 0, start_diff = 0, end_diff = 0;
    scanf("%d %d", &n, &l);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 1; i < n; i++)
    {
        diff = (diff > arr[i] - arr[i - 1]) ? diff : arr[i] - arr[i - 1];
    }
    diff = (double)diff / 2;
    start_diff = (double)arr[0];
    end_diff = (double)(l - arr[n - 1]);

    cout << fixed << setprecision(9) << find_max(diff, start_diff, end_diff);

    return 0;
}