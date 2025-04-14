#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x[21], y[21];

    cin >> x >> y;

    if (strcmp(x, y) <= 0)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }

    return 0;
}