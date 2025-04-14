#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n;
        vector<int> node;
        m = n;
        while (n--)
        {
            string beatmap;
            cin >> beatmap;

            for (int i = 0; i < 4; i++)
            {
                if (beatmap[i] == '#')
                    node.push_back(i + 1);
            }
        }

        for (int i = m - 1; i >= 0; i--)
            cout << node[i] << " ";

        cout << endl;
    }

    return 0;
}