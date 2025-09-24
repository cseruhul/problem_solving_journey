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
        int n;
        cin >> n;

        vector<int> arr(n);
        unordered_map<int, int> freq_arr;

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            freq_arr[arr[i]]++;
        }

        int max_freq = 0;
        for (auto item : freq_arr)
        {
            if (item.second > max_freq)
                max_freq = item.second;
        }

        int time;
        if (max_freq == 0)
        {
            time = INT_MAX;
        }
        else
        {
            time = 1 + n - max_freq;
        }

        int ans = min(time, n - freq_arr[1]);

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