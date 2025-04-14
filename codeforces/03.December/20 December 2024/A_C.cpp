#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n, op = 0;
        cin >> a >> b >> n;

        while ((a <= n) && (b <= n))
        {
            op++;
            if (a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }
        }

        cout << op << endl;
    }

    return 0;
}