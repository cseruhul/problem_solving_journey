#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;
    int *arr = new int[n];
    int l = 0, r = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (l <= r)
    {
        if (arr[l] != arr[r])
        {
            flag = 0;
            break;
        }
        l++;
        r--;
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}