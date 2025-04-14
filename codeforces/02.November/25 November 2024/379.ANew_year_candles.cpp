#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cur_a, cur_b, hour = 0;
    cin >> a >> b;

    cur_a = a;
    cur_b = 0;

    while (cur_a)
    {
        hour += cur_a;
        cur_b += cur_a;

        cur_a = cur_b / b;
        cur_b = cur_b % b;
    }

    cout << hour;

    return 0;
}