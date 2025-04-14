#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, time_count = 0, book_count = 0;

    cin >> n >> t;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (time_count + arr[i] > t)
        {
            break;
        }
        else
        {
            time_count += arr[i];
            book_count++;
        }
    }

    cout << book_count;

    return 0;
}