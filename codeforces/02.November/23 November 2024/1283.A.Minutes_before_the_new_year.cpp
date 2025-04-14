#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, hour, minutes, h, m, answer;

    cin >> t;

    while (t--)
    {
        cin >> hour >> minutes;

        h = 23 - hour;
        m = 60 - minutes;

        answer = h * 60 + m;

        cout << answer << endl;
    }

    return 0;
}