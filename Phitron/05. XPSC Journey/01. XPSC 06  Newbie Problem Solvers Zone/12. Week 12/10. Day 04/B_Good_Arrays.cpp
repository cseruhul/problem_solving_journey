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
        vector<ll> arr(n);

        ll total_sum = 0;
        ll one_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
            if (arr[i] == 1)
                one_count++;
        }

        if (total_sum >= one_count + n && n > 1)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
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