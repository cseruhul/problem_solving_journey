#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        long long arr[n];
        long long temp = 0, result = INTMAX_MAX;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                temp = arr[i] + arr[j] + j - i;
                result = min(temp, result);
            }
        }
        cout << result << endl;
    }

    return 0;
}