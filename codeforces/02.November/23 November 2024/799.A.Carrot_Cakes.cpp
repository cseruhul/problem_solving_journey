#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, k, d, time_without_new = 0, time_with_new = 0;

    cin >> n >> t >> k >> d;

    time_without_new = t * ((n / k) + (n % k != 0));

    int n_rem = n - d / t * k;

    time_with_new = d + t * ((n_rem / (2 * k)) + (n_rem % (2 * k) != 0));

    if (time_with_new < time_without_new)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}