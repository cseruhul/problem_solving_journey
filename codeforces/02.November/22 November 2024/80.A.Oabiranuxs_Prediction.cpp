#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, m, j = 0;
    int *arr = new int[51];

    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (isPrime(i))
        {
            arr[j++] = i;
        }
    }


    if (arr[1] == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}