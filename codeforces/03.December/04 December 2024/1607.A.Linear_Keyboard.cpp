#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        string s, pattern;
        char ch = 'a';
        int ans = 0;
        cin >> pattern >> s;

        int n = s.size();
        unordered_map<char, int> letters;
        for (int i = 0; i < 26; i++, ch++)
        {
            letters[pattern[i]] = i + 1;
        }

        for (int i = 1; i < n; i++)
        {
            ans += abs(letters[s[i]] - letters[s[i - 1]]);
        }

        cout << ans << endl;
    }
    return 0;
}