#include <bits/stdc++.h>
using namespace std;

int sum_of_series(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n, i = 1, sum = 0;

    cin >> n;

    while (1)
    {

        sum += sum_of_series(i);
        if (sum > n)
        {
            i--;
            break;
        }
        else
        {
            i++;
        }
    }
    cout << i;

    return 0;
}