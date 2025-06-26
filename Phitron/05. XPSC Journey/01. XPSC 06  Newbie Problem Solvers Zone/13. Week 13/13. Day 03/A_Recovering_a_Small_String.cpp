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
        unordered_map<int, char> mp;

        char ch = 'a';

        for (int i = 1; i <= 26; i++)
        {
            mp[i] = ch;
            ch++;
        }

        for (int i = 1; i <= 26; i++)
        {
            for (int j = 1; j <= 26; j++)
            {
                for (int k = 1; k <= 26; k++)
                {
                    if ((i + j + k) == n)
                    {
                        cout << mp[i] << mp[j] << mp[k] << newline;
                        return;
                    }
                }
            }
        }
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