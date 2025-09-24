#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;
const int maxNum = 1e6 + 7;
vector<int> prime_numbers(maxNum, true);
vector<int> allPrime;

void sieve()
{
    for (int i = 2; i <= maxNum; i++)
    {
        if (prime_numbers[i])
        {
            for (int j = i + i; j <= maxNum; j += i)
            {
                prime_numbers[j] = false;
            }
        }
    }

    for (int i = 2; i <= maxNum; i++)
    {
        if (prime_numbers[i])
        {
            allPrime.push_back(i);
        }
    }
}

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        int idx = 0;
        map<int, int> primeFactor;

        while (n > 1)
        {
            while (true)
            {
                if (n % allPrime[idx] != 0)
                {
                    break;
                }
                primeFactor[allPrime[idx]]++;
                n = n / allPrime[idx];
            }

            idx++;
        }

        for (auto [first, second] : primeFactor)
        {
            cout << first << " " << second << newline;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    sieve();
    ruhul.solve();

    return 0;
}