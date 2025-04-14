#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int l = 0, r = n - 1; l <= r; l++, r--)
    {
        // swap(arr[l], arr[r]);
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}