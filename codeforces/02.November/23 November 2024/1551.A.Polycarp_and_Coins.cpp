#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> t;

    while (t--)
    {
        int c1, c2;
        cin >> n;

        if (n % 3 == 0)
        {
            c1 = c2 = n / 3;
        }
        else if (n % 3 == 1)
        {
            c1 = n / 3 + 1;
            c2 = n / 3;
        }
        else
        {
            c1 = n / 3;
            c2 = n / 3 + 1;
        }

        cout << c1 << " " << c2 << endl;
    }

    return 0;
}