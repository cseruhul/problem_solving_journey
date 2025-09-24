#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;

        vector<ll> formed_numbers;
        ll div = 10;

        for (int i = 0; i < 18; i++)
        {
            ll d = div + 1;

            if (n % d == 0)
            {
                formed_numbers.push_back(n / d);
            }

            div *= 10;
        }

        int ans_size = formed_numbers.size();

        if (ans_size == 0)
        {
            cout << '0';
        }
        else
        {
            cout << ans_size << newline;
            sort(formed_numbers.begin(), formed_numbers.end());
            for (auto item : formed_numbers)
                cout << item << " ";
        }

        cout << newline;
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