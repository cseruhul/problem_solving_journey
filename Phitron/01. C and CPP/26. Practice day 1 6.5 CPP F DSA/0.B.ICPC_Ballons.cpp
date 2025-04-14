#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    int frequency[26] = {0};
    cin >> t;

    while (t--)
    {
        int ballons = 0;
        cin >> n;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            frequency[s[i] - 'A']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (frequency[i] > 0)
            {
                ballons += 2 + frequency[i] - 1;
            }
        }
        fill(frequency, frequency + 26, 0);
        cout << ballons << endl;
    }
    return 0;
}