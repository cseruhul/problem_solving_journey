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
        int one = 0, two = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                one++;
            else
                two++;
        }

        if (one == 0 || two == 0)
        {
            ans = 0;
        }
        else if (one % 2 == 0)
        {
            ans = min(one / 2, two);
        }
        else if (one % 2 == 1)
        {
            ans = two;
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