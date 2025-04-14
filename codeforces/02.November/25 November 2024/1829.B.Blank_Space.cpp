#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        int i, j, length = 0, current_len = 0;
        cin >> n;
        int *arr = new int[n];

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                current_len++;
            }
            else
            {
                length = max(length, current_len);
                current_len = 0;
            }
        }

        // i = 0;
        // j = 0;

        // do
        // {
        //     if (arr[j] == 0)
        //     {
        //         i = j;
        //         while (arr[j] == 0 && j < n)
        //         {
        //             j++;
        //         }

        //         length = max(length, j - i);
        //     }
        //     j++;

        // } while (j < n);

        cout << max(length, current_len) << endl;
    }

    return 0;
}