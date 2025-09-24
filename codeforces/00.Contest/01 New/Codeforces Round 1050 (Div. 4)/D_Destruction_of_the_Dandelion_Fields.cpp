#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, number;
        cin >> n;

        vector<ll> odd_numbers;
        ll sum_of_evens = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> number;

            if (number % 2)
            {
                odd_numbers.push_back(number);
            }
            else
            {
                sum_of_evens += number;
            }
        }

        if (odd_numbers.empty())
        {
            cout << "0" << newline;
            return;
        }

        sort(odd_numbers.rbegin(), odd_numbers.rend());
        int k = odd_numbers.size();
        int N = (k + 1) / 2;
        ll sum_of_Oddnumbers = 0;

        for (int i = 0; i < N; i++)
        {
            sum_of_Oddnumbers += odd_numbers[i];
        }

        ll ans = sum_of_Oddnumbers + sum_of_evens;
        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}