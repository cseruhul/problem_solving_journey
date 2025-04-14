#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans;
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    freq[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        freq[i] = freq[i - 1] + arr[i];
    }

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            leftSum = 0;
        else
        {
            leftSum = freq[i] - arr[i];
        }
        rightSum = freq[n - 1] - freq[i];

        if (leftSum == rightSum)
        {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}