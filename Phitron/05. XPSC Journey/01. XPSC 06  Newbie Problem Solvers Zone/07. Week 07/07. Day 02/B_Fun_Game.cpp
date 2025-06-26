#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        if (s == t)
        {
            cout << "YES" << endl;
            return;
        }

        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                idx = i;
                break;
            }
        }

        if (idx == -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if (s[i] != t[i])
                {
                    if (idx > i)
                    {
                        flag = false;
                        break;
                    }
                }
            }

            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int T;
    cin >> T;

    while (T--)
        ruhul.solve();

    return 0;
}