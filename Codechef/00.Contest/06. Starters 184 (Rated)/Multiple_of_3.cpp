#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans;
        cin >> n;

        if (n % 3 == 0)
            ans = n;
        else if ((n + 1) % 3 == 0)
            ans = n + 1;
        else if ((n - 1) % 3 == 0)
            ans = n - 1;

        cout << ans << endl;
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