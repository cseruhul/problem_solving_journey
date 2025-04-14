#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n;
        unordered_set<int> unique;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            unique.insert(x);
        }

        if ((n - unique.size()) % 2 == 0)
        {
            cout << unique.size() << endl;
        }
        else
        {
            cout << unique.size() - 1 << endl;
        }
    }

    return 0;
}