#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> s;
        int flag = s[0] - s[2];
        if (flag < 0)
        {
            if (s[1] != '<')
            {
                s[1] = '<';
            }
        }
        else if (flag > 0)
        {
            if (s[1] != '>')
            {
                s[1] = '>';
            }
        }
        else if (flag == 0)
        {
            if (s[1] != '=')
            {
                s[1] = '=';
            }
        }
        cout << s << endl;
    }

    return 0;
}