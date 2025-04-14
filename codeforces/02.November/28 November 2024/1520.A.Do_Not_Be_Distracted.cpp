#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        int frequency[26] = {0}, flag = 1;
        string task;
        cin >> n;
        cin >> task;

        char prev = '\0';
        string result;

        for (char current : task)
        {
            if (current != prev)
            {
                result += current;
                prev = current;
            }
        }
        // cout << result << " => ";

        for (int i = 0; i < result.size(); i++)
        {
            if (frequency[result[i] - 'A'] == 0)
            {
                frequency[result[i] - 'A'] = 1;
            }
            else
            {
                // cout << result[i] << " => ";
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}