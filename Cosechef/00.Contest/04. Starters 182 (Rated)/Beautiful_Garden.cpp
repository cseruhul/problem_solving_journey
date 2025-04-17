#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> flower(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> flower[i];

        sort(flower.begin(), flower.end());

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < abs(n - k); j++)
            {
                if (i + flower[j] <= d)
                    ans++;
            }
        }

        cout << ans + abs(n - k) << endl;
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