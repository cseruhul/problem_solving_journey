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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int max_sugar = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            max_sugar = max(max_sugar, b[i]);
        }

        map<int, int> frequency;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
                frequency[b[i]] += a[i];
        }
        // for (auto item : frequency)
        //     cout << item.first << " " << item.second << newline;
        int ans = 0;
        int sum = 0;

        for (int i = 1; i <= max_sugar; i++)
        {
            sum += frequency[i];

            ans = max(ans, sum - i);
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