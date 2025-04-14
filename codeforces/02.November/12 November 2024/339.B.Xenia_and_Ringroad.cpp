#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, i, j, count = 0;

    cin >> n >> m;
    long long arr[m];

    for (i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    // i = 0;
    j = 1;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] >= j)
        {
            count = count + arr[i] - j;
        }
        else
        {
            count = count + (n - j) + arr[i];
        }

        j = arr[i];
    }

    // while (i < m)
    // {
    //     if (arr[i] == j)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         count++;
    //         j++;
    //     }

    //     if (j == n + 1)
    //     {
    //         j = 1;
    //     }
    // }
    cout << count << endl;

    return 0;
}