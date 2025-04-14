#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, a, result;

    cin >> n >> k >> a;

    result = n * k;

    if (result % a == 0)
    {
        result = result / a;
        if (result >= -2147483648 && result <= 2147483647)
        {
            cout << "int";
        }
        else
        {
            cout << "long long";
        }
    }
    else
    {
        cout << "double";
    }

    return 0;
}