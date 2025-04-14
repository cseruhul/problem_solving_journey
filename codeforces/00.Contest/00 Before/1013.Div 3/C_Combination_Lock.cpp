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
        cin >> n;

        if (n % 2)
        {
            for (int i = 1; i <= n; i += 2)
                cout << i << " ";
            for (int i = 2; i <= n; i += 2)
                cout << i << " ";
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

    return 0;
}