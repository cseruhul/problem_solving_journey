#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max_score = 0;
    string str, ans;
    cin >> n;
    unordered_map<string, int> team;

    while (n--)
    {
        cin >> str;
        team[str]++;
    }

    unordered_map<string, int>::iterator itr;

    for (itr = team.begin(); itr != team.end(); itr++)
    {
        if (itr->second > max_score)
        {
            max_score = itr->second;
            ans = itr->first;
        }
    }

    cout << ans;

    return 0;
}