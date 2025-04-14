#include <bits/stdc++.h>
using namespace std;

int digit_calc(int num)
{
    int digit = 0;
    while (num)
    {
        num = num / 10;
        digit++;
    }

    return digit;
}

int main()
{
    int t, n, digit, result;

    cin >> t;

    while (t--)
    {
        cin >> n;

        int digit = digit_calc(n);
        result = 10 * (n % 10 - 1) + digit * (digit + 1) * .5;

        cout << result << endl;
    }

    return 0;
}