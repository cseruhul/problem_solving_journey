#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, s1, s2, s3, s4, first, f_min, second, s_min;

    cin >> t;

    while (t--)
    {
        cin >> s1 >> s2 >> s3 >> s4;

        first = max(s1, s2);
        f_min = min(s1, s2);

        second = max(s3, s4);
        s_min = min(s3, s4);

        if (s_min > first || f_min > second)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}