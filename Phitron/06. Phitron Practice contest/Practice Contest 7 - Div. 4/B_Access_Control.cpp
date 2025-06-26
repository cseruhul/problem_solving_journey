#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, x;
        cin >> n >> x;
        string str;
        cin >> str;
        bool flag = true;
        int swipes = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                swipes--;
            }
            else
            {
                swipes = x;
            }

            if (swipes < 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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