#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> running_arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    running_arr[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        running_arr[i] = running_arr[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << running_arr[i] << " ";
    }

    return 0;
}