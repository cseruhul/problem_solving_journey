#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        for (int i = 0; i < 5; i++)
        {
            int minimum = min({a, b, c});

            if (minimum == a)
            {
                a++;
            }
            else if (minimum == b)
            {
                b++;
            }
            else
            {
                c++;
            }
        }

        cout << a * b * c << endl;
    }

    return 0;
}