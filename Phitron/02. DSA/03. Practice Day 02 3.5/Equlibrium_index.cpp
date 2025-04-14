#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total = 0, right_sum = 0, flag = -1;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        total += num[i];
    }

    vector<int> prefix_sum(n);
    prefix_sum[0] = num[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + num[i];
    }

    for (auto item : prefix_sum)
    {
        cout << item << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        right_sum = total - prefix_sum[i];
        cout << prefix_sum[i] - num[i] << " " << right_sum << " " << i << endl;

        if (right_sum == prefix_sum[i] - num[i])
        {
            flag = i;
            break;
        }
    }

    cout << flag << endl;

    return 0;
}