#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, a, b, c, rem, days;
        cin >> n >> a >> b >> c;
        // cout << n << " " << a << " " << b << " " << c << endl;
        // cout << a + b + c << endl;
        rem = n % (a + b + c);
        days = (n / (a + b + c)) * 3;
        // cout << rem << " " << days << " " << endl;
        if (rem <= a && rem > 0)
        {
            days += 1;
        }
        else if (rem <= (a + b) && rem > a)
        {
            days += 2;
        }
        else if (rem <= (a + b + c) && rem > b)
        {
            days += 3;
        }
        cout << days << endl;
    }
    return 0;
}