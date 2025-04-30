#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        bool flag = true;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int s_one = 0, t_one = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                s_one++;
            if (t[i] == '1')
                t_one++;
        }

        for (int i = 0; i < n; i++)
        {
            if (t[i] == '1' && s[i] != '1')
                flag = false;
        }
        // cout << s_one << " " << t_one << endl;
        if ((s_one > t_one && ((s_one - t_one) % 2 == 0)) && flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}