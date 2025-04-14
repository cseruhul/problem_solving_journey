#include <bits/stdc++.h>
using namespace std;

int prepare_and_append(string str, int n)
{
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (str[l] != str[r])
        {
            l++;
            r--;
        }
        else
        {
            break;
        }
    }

    return (r - l + 1);
}

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        string str;
        cin >> n;
        cin >> str;
        int ans;

        ans = prepare_and_append(str, n);
        cout << ans << endl;
    }

    return 0;
}