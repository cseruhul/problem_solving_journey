#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int *arr = new int[n];
        int minimum = INT_MAX;
        int maximum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < minimum)
            {
                minimum = arr[i];
            }
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }

        cout << (maximum - minimum) << endl;
    }
    return 0;
}