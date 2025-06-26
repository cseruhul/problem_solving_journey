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

        map<char, int> mp1;
        bool decision1 = false;

        for (int i = 0; i < n - 1; i++)
        {
            mp1[str[i]]++;

            if (mp1[str[i]] >= 2)
            {
                decision1 = true;
                break;
            }
        }
        bool decision2 = false;
        map<char, int> mp2;
        for (int i = 1; i < n; i++)
        {
            mp2[str[i]]++;

            if (mp2[str[i]] >= 2)
            {
                decision2 = true;
                break;
            }
        }

        if (decision1 || decision2)
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