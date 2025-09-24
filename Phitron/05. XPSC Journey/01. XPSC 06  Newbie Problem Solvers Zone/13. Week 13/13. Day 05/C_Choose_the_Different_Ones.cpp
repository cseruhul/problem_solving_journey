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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        vector<ll> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<ll> frequency(k + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                frequency[a[i]] |= 1;
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (b[i] <= k)
            {
                frequency[b[i]] |= 2;
            }
        }

        // for (auto item : frequency)
        //     cout << item << " ";
        // cout << endl;

        vector<ll> numbers(4);
        for (int i = 0; i <= k; i++)
        {
            numbers[frequency[i]]++;
        }

        if (numbers[1] > k / 2 || numbers[2] > k / 2 || numbers[1] + numbers[2] + numbers[3] != k)
            cout << "NO" << newline;
        else
            cout << "YES" << newline;
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