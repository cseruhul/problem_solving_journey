#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        bool flag = true;
        for (auto item : s)
        {
            if (item <= 4)
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
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