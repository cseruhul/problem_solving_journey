#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k, no_of_op = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                no_of_op++;
                i += k - 1;
            }
        }

        cout << no_of_op << endl;
    }

    return 0;
}