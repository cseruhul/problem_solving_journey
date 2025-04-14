#include <bits/stdc++.h>
using namespace std;

int isPrime[1000000];

void Sieve_of_Eratosthenes()
{

    for (int i = 2; i < 1000000; i++)
    {
        if (isPrime[i] == 0)
        {
            for (int j = 2; i * j < 1000000; j++)
            {
                isPrime[i * j] = 1;
            }
        }
    }
}

/*
long long divisor_count(long long n)
{
    long long div_count = 0;
    // cout << "For " << n << " ";
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                div_count += 1;
            else
            {
                div_count += 2;
            }
        }
    }

    return div_count + 2;
}
*/

int main()
{
    int n;
    long long x;
    cin >> n;
    Sieve_of_Eratosthenes();
    // for (auto item : isPrime)
    // {
    //     printf("%d ", item);
    // }

    while (n--)
    {
        cin >> x;
        long long sq = sqrt(x);
        if (x < 2)
        {
            cout << "NO\n";
        }
        else
        {

            if (sq * sq == x && isPrime[sq] == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }

        /*

        cin >> x;
        int up = divisor_count(x);
        if (up == 3)
            cout << "YES\n";
        // cout << x << " " << up << "YES\n";
        else
            cout << "NO\n";
        // cout << x << " " << up << "NO\n";
        */
    }

    return 0;
}