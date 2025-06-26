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
        char over[6];

        for (int i = 0; i < 6; i++)
        {
            cin >> over[i];
        }
        bool flag = false;

        for (int i = 2; i < 6; i++)
        {
            if (over[i - 2] == 'W' && over[i - 1] == 'W' && over[i - 0] == 'W')
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << newline;
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