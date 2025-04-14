#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long n, sum = 0, number;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> number;
            sum += number;
        }

        long long rt_of_sum = sqrt(sum);

        if (rt_of_sum * rt_of_sum == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}