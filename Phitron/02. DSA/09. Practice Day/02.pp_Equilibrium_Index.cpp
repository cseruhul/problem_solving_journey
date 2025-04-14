#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> num(n);
    vector<int> prefix_sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl;

    prefix_sum[0] = num[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + num[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefix_sum[i] << " ";
    // }

    // cout << endl;

    int left_sum = 0, right_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            left_sum = 0;
        else
        {
            left_sum = prefix_sum[i - 1];
        }

        right_sum = prefix_sum[n - 1] - prefix_sum[i - 1] - num[i];

        if (left_sum == right_sum)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}