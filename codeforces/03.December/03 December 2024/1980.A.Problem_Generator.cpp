#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, m, problems = 0;
        string problem_set;
        cin >> n >> m;
        cin >> problem_set;

        unordered_map<char, int> freq;
        for (char ch = 'A'; ch <= 'G'; ch++)
        {
            freq[ch] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            freq[problem_set[i]]++;
        }

        unordered_map<char, int>::iterator itr;
        for (itr = freq.begin(); itr != freq.end(); itr++)
        {
            if ((m - itr->second) > 0)
            {
                problems += m - itr->second;
            }
        }

        cout << problems << endl;
    }

    return 0;
}