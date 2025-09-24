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
        string str;
        cin >> str;

        vector<bool> marked(n, false);

        for (int x = 1; x < n - 1; x++)
        {
            if (str[x - 1] == '1' && str[x] == '1' && str[x + 1] == '1')
            {
                marked[x - 1] = true;
                marked[x] = true;
                marked[x + 1] = true;
            }
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1' && marked[i] == false)
            {
                flag = false;
                break;
            }

            if (str[i] == '0' && marked[i] == true)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Yes" << newline;
        else
            cout << "No" << newline;
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