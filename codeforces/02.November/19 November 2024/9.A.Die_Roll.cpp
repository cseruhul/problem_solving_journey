#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, a, b = 6, max_point;
    cin >> y >> w;

    max_point = max(y, w);
    max_point = b - max_point + 1;

    if (b % max_point == 0)
    {
        b = b / max_point;
        a = max_point / max_point;
    }
    else
    {
        a = max_point;
    }

    if (a % 2 == 0 && a % 2 == 0)
    {
        a = a / 2;
        b = b / 2;
    }

    cout << a << '/' << b;

    return 0;
}