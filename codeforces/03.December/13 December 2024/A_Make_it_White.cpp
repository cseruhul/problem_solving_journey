#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, l, r, length = 0;
        cin >> n;
        string str;
        cin >> str;
        l = 0;
        r = n - 1;

        while (l <= r)
        {
            if (str[l] == 'W')
            {
                l++;
            }
            if (str[r] == 'W')
            {
                r--;
            }

            if (str[l] == 'B' && str[r] == 'B')
            {
                length = r - l + 1;
                break;
            }
        }

        cout << length << endl;
    }

    return 0;
}