#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < 10; i++)
            {
                int num = n / 10;
                num = num * 10 + i;

                if (num % 7 == 0)
                {
                    ans = num;
                    break;
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}