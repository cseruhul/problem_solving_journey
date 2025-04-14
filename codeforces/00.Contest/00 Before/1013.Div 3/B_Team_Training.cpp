#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> skills(n);

        for (int i = 0; i < n; i++)
            cin >> skills[i];

        sort(skills.rbegin(), skills.rend());
        int team = 0;
        long long strength, member = 0;

        for (int i = 0; i < n; i++)
        {
            member++;
            strength = member * skills[i];

            if (strength >= x)
            {
                team++;
                member = 0;
            }
        }

        cout << team << endl;
    }

    return 0;
}