#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cin >> input;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    int n = input.size();

    int frequency[26] = {0};

    for (int i = 0; i < n; i++)
    {
        frequency[tolower(input[i]) - 'a']++;
    }

    e = frequency['e' - 'a'];
    g = frequency['g' - 'a'];
    y = frequency['y' - 'a'];
    p = frequency['p' - 'a'];
    t = frequency['t' - 'a'];

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << frequency[i] << " ";
    // }

    int ans = min({e, g, y, p, t});

    cout << ans << endl;

    return 0;
}