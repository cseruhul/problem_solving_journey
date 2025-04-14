#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int x1, y1, x2, y2, x3, y3, x4, y4, result = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        if ((x1 == x2) || (y1 == y2))
        {
            result = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        }
        else if ((x1 == x3) || (y1 == y3))
        {
            result = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        }
        else if ((x1 == x4) || (y1 == y4))
        {
            result = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);
        }

        cout << result << endl;
    }

    return 0;
}