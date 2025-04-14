#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, answer = 1;

    cin >> n;

    if (n == 0)
    {
        answer = 1;
    }
    else if (n % 4 == 0)
    {
        answer = 6;
    }
    else if (n % 4 == 1)
    {
        answer = 8;
    }
    else if (n % 4 == 2)
    {
        answer = 4;
    }
    else if (n % 4 == 3)
    {
        answer = 2;
    }

    cout << answer;

    return 0;
}