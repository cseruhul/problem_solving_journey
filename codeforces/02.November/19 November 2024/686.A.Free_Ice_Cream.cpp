#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x, d, distress = 0;
    char ch;
    cin >> n >> x;

    while (n--)
    {
        cin >> ch >> d;
        if (ch == '+')
        {
            x += d;
        }
        else if (ch == '-')
        {
            if (d <= x)
                x -= d;
            else
                distress++;
        }
    }
    cout << x << " " << distress << endl;

    return 0;
}