#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0, a;
        string str;
        getline(cin, str);

        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] == ' ' && str[i + 1] != ' ')
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}