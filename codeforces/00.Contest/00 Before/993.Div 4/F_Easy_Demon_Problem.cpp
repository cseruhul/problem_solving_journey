#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;

    cin >> n >> m >> q;
    vector<int> a(n);
    vector<int> b(m);

    unordered_map<int, int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[abs(a[i] * b[j])] = 1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        if (v[abs(num)] == 1)
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