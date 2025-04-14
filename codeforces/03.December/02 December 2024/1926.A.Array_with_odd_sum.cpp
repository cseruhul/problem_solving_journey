#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0, number;
        cin >> n;
        while (n--)
        {
            cin >> number;
            sum += number;
        }
        cout << sum << " = ";
        if (sum % 2 == 1)
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