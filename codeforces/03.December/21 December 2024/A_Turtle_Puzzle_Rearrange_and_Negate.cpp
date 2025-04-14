#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, num, sum = 0;
        cin >> n;

        while (n--)
        {
            cin >> num;
            sum += abs(num);
        }

        cout << sum << endl;
    }
    return 0;
}