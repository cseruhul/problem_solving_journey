#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int B = 30;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, K;
        cin >> n >> K;
        vector<int> arr(n);
        int max_set_bit = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> bits(B + 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = B; j >= 0; j--)
            {
                if ((arr[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }

        int ans = 0;
        for (int i = B; i >= 0; i--)
        {
            if (bits[i] == n)
            {
                ans += (1LL << i);
            }
            else
            {
                int need = n - bits[i];
                if (K >= need)
                {
                    ans += (1 << i);
                    K -= need;
                }
            }
        }
        cout << ans << endl;
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