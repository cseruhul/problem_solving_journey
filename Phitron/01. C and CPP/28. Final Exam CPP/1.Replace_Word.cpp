#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        for (int i = 0; i < s.size(); i++)
        {
            int a = s.find(x);

            if (a == -1)
                break;
            else
                s.replace(a, x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}