#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, two_count, three_count;

    cin >> t;

    while (t--)
    {
        two_count = 0;
        three_count = 0;
        cin >> n;

        while (n % 2 == 0)
        {
            two_count++;
            n = n / 2;
        }

        while (n % 3 == 0)
        {
            three_count++;
            n = n / 3;
        }

        if (n == 1 && two_count <= three_count)
        {
            cout << (2 * three_count - two_count) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}