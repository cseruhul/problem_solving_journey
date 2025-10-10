#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ans = n - m;

        if (ans <= 0)
        {
            ans = 0;
        }
        cout << ans << endl;
    }

    return 0;
}