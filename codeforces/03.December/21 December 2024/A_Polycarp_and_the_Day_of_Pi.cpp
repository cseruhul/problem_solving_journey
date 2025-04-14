#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str, pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
        int ans = 0, i;
        cin >> str;

        for (i = 0; ((str[i] != '\0') && (pi[i] != '\0')); i++)
        {
            if (str[i] != pi[i])
            {
                break;
            }
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}