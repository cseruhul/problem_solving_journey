#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;

    if (((int(x) % 5) == 0) && (x + 0.5 <= y))
    {
        cout << fixed << setprecision(2) << y - (x + 0.5) << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << y << endl;
    }

    return 0;
}