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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (auto &item : arr)
        {
            cin >> item;
        }

        vector<int> freq_arr(n + 1, 0);
        bool flag = true;

        for (auto item : arr)
        {
            freq_arr[item]++;
        }

        for (int i = 1; i <= n; i++)
        {
            if (freq_arr[i] % k != 0)
            {
                flag = false;
                break;
            }
        }

        if (!flag)
        {
            cout << "0" << newline;
            return;
        }

        vector<int> wanted(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            wanted[i] = freq_arr[i] / k;
        }

        vector<int> current_vlues(n + 1, 0);
        ll ans = 0;
        ll l = 0;
        ll exc = 0;

        for (int i = 0; i < n; i++)
        {
            ll x = arr[i];
            current_vlues[x]++;

            if (current_vlues[x] == wanted[x] + 1)
            {
                exc++;
            }

            while (exc > 0)
            {
                ll y = arr[l];
                if (current_vlues[y] == wanted[y] + 1)
                {
                    exc--;
                }
                current_vlues[y]--;
                l++;
            }

            ans += (i - l + 1);
        }

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