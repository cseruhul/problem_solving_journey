#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h, n, count = 1;
        cin >> w >> h >> n;

        // cout << "w = " << w << " h = " << h << " " << count << endl;

        while (w % 2 != 1)
        {
            // cout << "w = " << w << " h = " << h << " " << count << endl;
            count *= 2;
            w = w / 2;
        }

        while (h % 2 != 1)
        {
            // cout << "w = " << w << " h = " << h << " " << count << endl;
            count *= 2;
            h = h / 2;
        }

        // cout << "w = " << w << " h = " << h << " " << count << endl;
        // cout << count << endl;
        if (count >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        // cout << endl;
    }

    return 0;
}