#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, index;
    cin >> n >> q;

    vector<long long> arr(n + 1);
    cout << arr.size() << endl;

    for (long long i = 1, index = 1; i <= n / 3; i++)
    {
        for (int j = 0; j < 3; j++)
            arr[index++] = i;
    }

    vector<long long> prefix_sum(n + 1);
    prefix_sum[1] = arr[1];

    return 0;
}