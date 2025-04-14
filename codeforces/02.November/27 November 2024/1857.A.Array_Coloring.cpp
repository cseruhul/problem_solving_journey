#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, sum = 0, left = 0, number;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int flag = 0, sum = 0, left = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> number;

            arr[i] = number;
            sum += number;
        }

        // for (int i = 0; i < n; i++)
        //     cout << arr[i] << " ";

        for (int i = 0; i < n; i++)
        {
            left += arr[i];
            sum -= arr[i];

            if ((left % 2 == 0 && sum % 2 == 0) || (left % 2 == 1 && sum % 2 == 1))
            {
                flag = 1;
                break;
            }
            // cout << "=" << left << "," << sum << " = ";
        }

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}