#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, ans = 1;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        arr[0]++;

        for (int i = 0; i < n; i++)
        {
            ans *= arr[i];
        }

        cout << ans << endl;
    }

    return 0;
}