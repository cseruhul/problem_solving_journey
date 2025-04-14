#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b;

    while (a)
    {
        c = a;
        a = b % a;
        b = c;
    }

    cout << c;
    return 0;
}