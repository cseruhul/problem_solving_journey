#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<long long int> prefix_sum(n);
    prefix_sum[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    for (int l = 0, r = n - 1; l <= r; l++, r--)
    {
        swap(prefix_sum[l], prefix_sum[r]);
    }

    for (auto item : prefix_sum)
    {
        cout << item << " ";
    }

    return 0;
}