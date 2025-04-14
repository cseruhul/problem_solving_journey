#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, diff = INT_MAX;
        cin >> n;
        vector<int> strength(n);

        for (int i = 0; i < n; i++)
        {
            cin >> strength[i];
        }

        sort(strength.begin(), strength.end());

        for (int i = 1; i < n; i++)
        {
            diff = min(diff, (strength[i] - strength[i - 1]));
        }

        cout << diff << endl;
    }

    return 0;
}