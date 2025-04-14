#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b and a == c and a > 0 and b > 0 and c > 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}