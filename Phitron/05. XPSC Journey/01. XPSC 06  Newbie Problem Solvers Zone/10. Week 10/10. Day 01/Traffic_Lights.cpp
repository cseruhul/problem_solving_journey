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
        ll x, n;
        cin >> x >> n;

        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        set<ll> street_len;
        multiset<ll> max_passage;

        street_len.insert(0);
        street_len.insert(x);

        max_passage.insert(x);

        for (int i = 0; i < n; i++)
        {
            street_len.insert(arr[i]);

            auto itr = street_len.find(arr[i]);
            ll prev_val = *(prev(itr));
            ll next_val = *(next(itr));

            auto itr_removed = max_passage.find(next_val - prev_val);
            max_passage.erase(itr_removed);
            max_passage.insert(arr[i] - prev_val);
            max_passage.insert(next_val - arr[i]);

            cout << *max_passage.rbegin() << " ";
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