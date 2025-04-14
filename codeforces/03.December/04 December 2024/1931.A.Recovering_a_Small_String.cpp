#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char ch = 'a';

    cin >> t;
    unordered_map<int, char> letters;

    for (int i = 1; i <= 26; i++, ch++)
    {
        letters[i] = ch;
    }

    while (t--)
    {
        int n, i, j, k, flag = 0;
        cin >> n;

        for (i = 1; i < 27; i++)
        {
            for (j = i; j < 27; j++)
            {
                for (k = j; k < 27; k++)
                {
                    if (i + j + k == n)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1)
                    break;
            }
            if (flag == 1)
                break;
        }
        cout << letters[i] << letters[j] << letters[k] << endl;
    }

    return 0;
}