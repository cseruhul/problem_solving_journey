#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, x2, x3, a;
        cin >> x1 >> x2 >> x3;

        int sum = 0, minimum = INT_MAX;

        for (int i = 1; i <= 10; i++)
        {
            sum = abs(x1 - i) + abs(x2 - i) + abs(x3 - i);
            minimum = min(minimum, sum);
        }

        cout << minimum << endl;
    }

    return 0;
}