#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    vector<long long int> prefixsum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    prefixsum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i - 1] + arr[i];
    }


    while (q--)
    {
        long long l, r, sum = 0;
        cin >> l >> r;
        if (l == 1)
            sum = prefixsum[r - 1];
        else
        {
            sum = prefixsum[r - 1] - prefixsum[l - 1 - 1];
        }

        cout << sum << endl;
    }

    return 0;
}