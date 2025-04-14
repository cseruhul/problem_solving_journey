#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, number1, number2;
    cin >> a >> b >> c >> d;

    number1 = b * log(a);
    number2 = d * log(c);

    if (number1 > number2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}