#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d, waste = 0, waste_count = 0;
    cin >> n >> b >> d;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= b)
        {
            waste += arr[i];
        }

        if (waste > d)
        {
            waste_count++;
            waste = 0;
        }
    }

    cout << waste_count << endl;

    delete[] arr;

    return 0;
}