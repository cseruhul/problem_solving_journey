#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T, ans;
    int t;

    cin >> t;

    while (t--)
    {
        cin >> S >> T;

        int n = min(S.size(), T.size());

        for (int i = 0; i < n; i++)
        {
            cout << S[i] << T[i];
        }

        if (n == S.size())
        {
            for (int i = n; i < T.size(); i++)
            {
                cout << T[i];
            }
        }
        else
        {
            for (int i = n; i < S.size(); i++)
            {
                cout << S[i];
            }
        }

        cout << endl;
    }

    return 0;
}