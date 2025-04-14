#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, number, answer = -1;
        cin >> n;
        unordered_map<int, int> frequency;

        for (int i = 0; i < n; i++)
        {
            cin >> number;
            frequency[number]++;
        }

        unordered_map<int, int>::iterator itr;
        for (itr = frequency.begin(); itr != frequency.end(); itr++)
        {
            if (itr->second >= 3)
            {
                answer = itr->first;
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}