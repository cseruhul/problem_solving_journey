#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if ((5 - arr[i]) >= k)
        {
            // cout << arr[i] << " ";
            count++;
        }
    }

    // cout << endl;

    cout << count / 3;

    return 0;
}