#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e6 + 9;
vector<int> divisors(MOD);

class Ruhul_Amin
{
public:
    void seve_calculation()
    {
        for (int i = 1; i < MOD; i++)
        {
            for (int j = i; j < MOD; j += i)
            {
                divisors[j]++;
            }
        }
    }
    void solve()
    {
        int n;
        cin >> n;
        cout << divisors[n] << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    Ruhul_Amin ruhul;
    ruhul.seve_calculation();

    // for (int i = 0; i < MOD; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto item : divisors[i])
    //     {
    //         cout << item << " ";
    //     }
    //     cout << newline;
    // }
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}