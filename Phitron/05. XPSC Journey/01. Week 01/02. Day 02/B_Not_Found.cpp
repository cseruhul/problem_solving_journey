#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    char ans;
    bool flag = true;
    vector<bool> letters(26);

    cin >> str;

    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        letters[str[i] - 'a'] = true;
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] == false)
        {
            ans = 'a' + i;
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "None";
    else
        cout << ans;

    return 0;
}