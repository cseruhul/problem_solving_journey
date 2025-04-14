#include <bits/stdc++.h>
using namespace std;

int main()
{
    int even = 0, odd = 0, positive = 0, negative = 0, n, number;

    cin >> n;

    while (n--)
    {
        cin >> number;

        if (number % 2 == 0)
            even++;
        else
            odd++;

        if (number > 0)
            positive++;
        else if (number < 0)
            negative++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative;

    return 0;
}