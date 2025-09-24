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
        vector<int> gear(n);

        for (int i = 0; i < n; i++)
            cin >> gear[i];

        sort(gear.begin(), gear.end());

        bool flag = false;

        for (int i = 1; i < n; i++)
        {
            if (gear[i] == gear[i - 1])
            {
                flag = true;
                break;
            }
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
    int t;

    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}