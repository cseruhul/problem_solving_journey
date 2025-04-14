#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, total = 0;
        string str;
        cin >> n >> str;
        vector<ll> initial(n), change(n), diff(n);

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'L')
            {
                initial[i] = i;
                change[i] = n - 1 - i;
            }
            else
            {
                initial[i] = n - 1 - i;
                change[i] = i;
            }
            diff[i] = change[i] - initial[i];
            total += initial[i];
        }

        sort(diff.rbegin(), diff.rend());

        for (auto item : diff)
        {
            if (item >= 0)
                total += item;
            cout << total << " ";
        }

        cout << endl;
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