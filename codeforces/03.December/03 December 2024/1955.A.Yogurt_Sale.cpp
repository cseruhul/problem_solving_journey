#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int with_bonus = (b * (n / 2)) + (n % 2) * a;
        int without_bonus = n * a;

        // cout << without_bonus << " " << with_bonus << " = ";

        if (with_bonus < without_bonus)
        {
            cout << with_bonus << endl;
        }
        else
        {
            cout << without_bonus << endl;
        }
    }

    return 0;
}