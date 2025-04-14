#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, ans;
        cin >> a >> b;

        if (a != 0 && b != 0)
            ans = a + 2 * b + 1;
        else if (a != 0 && b == 0)
            ans = a + 1;
        else
            ans = 1;

        cout << ans << endl;
    }

    return 0;
}