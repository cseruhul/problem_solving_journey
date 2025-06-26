#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string str;
        cin >> str;
        int single = 0;
        int n = str.size();

        for (int i = 1; i < n; i++)
        {
            if (str[i] == ')' && str[i - 1] == '(')
            {
                single++;
            }
        }

        cout << single << endl;
        // if (single > 1)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;
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