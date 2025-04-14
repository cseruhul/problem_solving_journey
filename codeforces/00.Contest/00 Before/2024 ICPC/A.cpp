#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, total_sum = 0, a, b, c, d;
    cin >> a >> b >> c >> d;

    total_sum = 5 * (5 + 1) / 2;

    sum = a + b + c + d;

    cout << (total_sum - sum);

    return 0;
}