#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        int n;
        long long main_sum, sum = 0, sum_diff;

        cin >> n;
        vector<long long> arr(n - 2);

        for (int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        cin >> main_sum;
        sum_diff = main_sum - sum;
        cout << sum_diff + 1 << endl;
    }

    return 0;
}