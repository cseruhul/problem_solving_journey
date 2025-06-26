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
        string s;
        cin >> s;

        string t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 1)
                t.push_back('1');
            else
                t.push_back('1');
        }
        t.push_back('1');

        cout << t << endl;
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