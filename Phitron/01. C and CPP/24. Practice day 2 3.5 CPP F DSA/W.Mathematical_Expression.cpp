#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    char s, e;

    cin >> a >> s >> b >> e >> c;

    if ((s == '+' && a + b == c) || (s == '-' && a - b == c) || (s == '*' && a * b == c))
    {
        cout << "Yes";
    }
    else
    {
        if (s == '+')
        {
            cout << a + b;
        }
        else if (s == '-')
        {
            cout << a - b;
        }
        else if (s == '*')
        {
            cout << a * b;
        }
    }

    return 0;
}