#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int n, one = 0, zero = 0, no_of_prefix = 0;
            ll ans = 1;
            string s;
            cin >> n >> s;

            for (auto ch : s)
            {
                if (ch == '0')
                    zero++;
                else
                    one++;

                (zero == one) ? no_of_prefix++ : no_of_prefix;
            }

            for (int i = 1; i <= no_of_prefix; i++)
                ans = ans * 2;

            cout << ans << endl;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}