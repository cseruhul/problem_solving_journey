#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;

    cin >> n >> t;

    if (t > 1 && t < 10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        cout << "-1";
    }
    return 0;
}