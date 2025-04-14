#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> prefix_sum(n);

    prefix_sum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l == 0)
        {
            cout << prefix_sum[r] << endl;
        }
        else
        {
            cout << (prefix_sum[r] - prefix_sum[l - 1]) << endl;
        }
    }

    return 0;
}