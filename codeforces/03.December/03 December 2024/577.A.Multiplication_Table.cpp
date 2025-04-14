#include <bits/stdc++.h>
using namespace std;

int findFactors(int n, int x)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
            count++;
    }
    return count;
}

int main()
{
    int n, x;
    cin >> n >> x;

    int no_of_fact = findFactors(n, x);

    cout << no_of_fact;

    return 0;
}