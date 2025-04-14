#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int a = 0, b = 0, c = 0;
        string s;
        cin >> s;

        for (auto item : s)
        {
            if (item == 'A')
                a++;
            else if (item == 'B')
                b++;
            else
                c++;
        }

        if (a + c == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}