#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string str, base = "", expo = "0";
        int b, exp, i = 1;
        cin >> str;

        base = str[0];
        while (str[i] == '0')
        {
            base += str[i];
            i++;
        }

        for (; str[i] != '\0'; i++)
        {
            expo += str[i];
        }

        b = stoi(base);
        exp = stoi(expo);

        if ((b == 10) && (exp > 1))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}