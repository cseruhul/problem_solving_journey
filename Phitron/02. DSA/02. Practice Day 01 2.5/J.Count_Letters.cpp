#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> frequency(27, 0);

    for (int i = 0; i < s.size(); i++)
    {
        frequency[s[i] - 'a']++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (frequency[i] != 0)
        {
            char ch = i + 'a';
            cout << ch << " : " << frequency[i] << endl;
        }
    }

    return 0;
}