#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, p, price;
    cin >> x >> p;

    price = (x * p) / (100 - x);

    cout << fixed << setprecision(2) << price + p;

    return 0;
}