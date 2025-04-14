#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string b, ans = "";

    while (t--)
    {
        ans = "";
        cin >> b;
        ans += b[0];
        int n = b.length();
        for (int i = 1; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
            {
                ans += b[i];
                i++;
            }
        }
        ans += b[n - 1];
        cout << ans << endl;
    }

    return 0;
}