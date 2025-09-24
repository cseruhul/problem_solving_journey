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
        ll n;
        cin >> n;

        vector<ll> arr(n + 2);

        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> pref(n + 2);
        pref[1] = arr[1];

        for (int i = 2; i <= n; i++)
        {
            pref[i] = min(pref[i - 1], arr[i]);
        }

        // for (auto item : pref)
        //     cout << item << " ";
        // cout << newline;

        ll pref_sum = 0;
        for (auto item : pref)
        {
            pref_sum += item;
        }

        // cout << pref_sum << newline;

        vector<ll> suff(n + 3);

        suff[n + 1] = 0;
        for (int i = n; i > 0; i--)
        {
            suff[i] = pref[i] + suff[i + 1];
        }

        // for (auto item : suff)
        //     cout << item << " ";

        // cout << newline << newline;

        int f = n + 1;
        for (int i = 2; i <= n - 1; i++)
        {
            if (pref[i] == pref[i - 1])
            {
                f = i;
                break;
            }
        }

        vector<ll> cumulative(n + 2);
        for (int i = 2; i <= n; i++)
        {
            cumulative[i] = pref[i - 1] - pref[i];
        }

        ll m = LLONG_MAX, best_soltuon = 0;
        for (int j = 2; j <= n; j++)
        {
            long long sum_of_v;
            if (j <= f)
            {
                if (j == 2)
                {
                    sum_of_v = suff[j] - arr[j];
                }
                else
                {
                    m = min(m, cumulative[j - 1]);
                    sum_of_v = suff[j] - min(arr[j], m);
                }
            }
            else
            {
                sum_of_v = suff[j];
            }

            best_soltuon = max(best_soltuon, sum_of_v);
        }
        cout << pref_sum - best_soltuon << newline;
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