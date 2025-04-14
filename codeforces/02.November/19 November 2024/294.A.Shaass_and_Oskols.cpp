#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, m;
    cin >> n;
    int *arr = new int[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;

    while (m--)
    {
        cin >> x >> y;

        if (x > 1 && x < n)
        {
            arr[x - 1] += y - 1;
            arr[x + 1] += arr[x] - y;
            arr[x] = 0;
        }
        else
        {
            if (x == 1)
            {
                arr[x + 1] += arr[x] - y;
                arr[x] = 0;
            }
            else if (x == n)
            {
                arr[x - 1] += y - 1;
                arr[x] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
    return 0;
}