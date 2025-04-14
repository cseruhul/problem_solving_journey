#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b;

    n = a + b;

    if (abs(a - b) <= 1 && n != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}