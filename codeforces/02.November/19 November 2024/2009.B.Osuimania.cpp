#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string beatmap;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int *answer = new int[n];
        int i = 0, j;
        int m = n;
        while (n--)
        {
            cin >> beatmap;
            for (j = 0; beatmap[j] != '\0'; j++)
            {
                if (beatmap[j] == '#')
                {
                    break;
                }
            }
            answer[i++] = j + 1;
        }

        for (m = m - 1; m >= 0; m--)
        {
            cout << answer[m] << " ";
        }

        cout << endl;
    }

    return 0;
}