#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int t;

    cin >> t;

    while (t--)
    {
        cin >> n;

        // cout << n << " ";
        if ((n & (n - 1)) == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}