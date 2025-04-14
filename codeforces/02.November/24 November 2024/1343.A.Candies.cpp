#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, n, k;

    cin >> t;

    while (t--)
    {
        cin >> n;

        for (int k = 2;; k++)
        {
            int calc = pow(2, k) - 1;

            if (n % calc == 0)
            {
                x = n / calc;
                break;
            }
        }

        cout << x << endl;
    }
    return 0;
}