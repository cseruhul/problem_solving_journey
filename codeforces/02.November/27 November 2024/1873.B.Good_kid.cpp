#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, product = 1, max_product = LLONG_MIN;

    cin >> t;

    while (t--)
    {
        cin >> n;
        product = 1;
        long long curr_product, arr[n], number;

        for (int i = 0; i < n; i++)
        {
            cin >> number;
            arr[i] = number;
            product *= number;
        }
        // cout << product << endl;

        for (int i = 0; i < n; i++)
        {
            // cout << product << " ";
            curr_product = product / arr[i];
            max_product = max(max_product, curr_product);
        }

        cout << max_product << endl;
    }

    return 0;
}