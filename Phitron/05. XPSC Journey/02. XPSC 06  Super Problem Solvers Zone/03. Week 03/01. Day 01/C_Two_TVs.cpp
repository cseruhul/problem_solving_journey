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

        map<int, int> shows;
        for (int i = 1; i <= n; i++)
        {
            ll l, r;
            cin >> l >> r;

            shows[l]++;
            shows[r + 1]--;
        }

        ll sum = 0;
        bool flag = true;
        for (auto [left, right] : shows)
        {
            sum += right;

            if (sum > 2)
                flag = false;
        }

        if (flag)
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

    ruhul.solve();

    return 0;
}