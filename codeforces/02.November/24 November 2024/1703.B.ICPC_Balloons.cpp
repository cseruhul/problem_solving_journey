#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int t, n, sum = 0;
    unordered_map<char, int> frequency;

    cin >> t;

    while (t--)
    {
        cin >> n;
        cin >> str;
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (frequency[str[i]] == 0)
            {
                frequency[str[i]] = 1;
                sum += 2;
            }
            else
            {
                sum += 1;
            }
        }
        frequency.clear();
        cout << sum << endl;
    }

    return 0;
}