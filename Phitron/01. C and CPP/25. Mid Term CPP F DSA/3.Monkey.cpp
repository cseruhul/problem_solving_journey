#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100003];

    while (cin.getline(str, 100003))
    {
        int n = strlen(str);

        sort(str, str + n);

        for (int i = 0; i < n; i++)
        {
            if (str[i] != ' ')
                cout << str[i];
        }

        cout << endl;
    }

    return 0;
}