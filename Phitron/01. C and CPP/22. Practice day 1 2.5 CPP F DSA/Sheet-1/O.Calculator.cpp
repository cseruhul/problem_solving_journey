#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, result;
    char s;
    cin >> a >> s >> b;

    if (s == '+')
    {
        result = a + b;
    }
    else if (s == '-')
    {
        result = a - b;
    }
    else if (s == '*')
    {
        result = a * b;
    }
    else
    {
        result = a / b;
    }

    cout << result << endl;

    return 0;
}