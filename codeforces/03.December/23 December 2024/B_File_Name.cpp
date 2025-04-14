#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, no_of_x, i, j, remove = 0;
    string str;
    cin >> n;
    cin >> str;

    for (i = 0; i < n; i++)
    {
        j = i;
        while (str[j] == 'x')
        {
            j++;
        }

        no_of_x = j - i;

        if (no_of_x >= 3)
        {
            remove++;
            no_of_x = 0;
        }
    }

    cout << remove;

    return 0;
}