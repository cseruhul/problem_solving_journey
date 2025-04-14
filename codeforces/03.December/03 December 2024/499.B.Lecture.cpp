#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> language;

    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        language[a] = b;
    }

    for (int i = 0; i < n; i++)
    {
        string c;
        cin >> c;

        if (language[c].size() < c.size())
        {
            cout << language[c] << " ";
        }
        else
        {
            cout << c << " ";
        }
    }

    // unordered_map<string, string>::iterator itr;

    // for (itr = language.begin(); itr != language.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }

    return 0;
}