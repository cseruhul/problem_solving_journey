#include <bits/stdc++.h>
using namespace std;

int main()
{
    string original = "codeforces", s;

    int t;

    cin >> t;

    while (t--)
    {
        int count_diff = 0;

        cin >> s;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != original[i])
                count_diff++;
        }

        cout << count_diff << endl;
    }

    return 0;
}