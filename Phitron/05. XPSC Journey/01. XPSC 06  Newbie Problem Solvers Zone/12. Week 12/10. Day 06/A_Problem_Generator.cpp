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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        string problems = "ABCDEFG";
        map<char, int> frequency;

        for (int i = 0; i < n; i++)
        {
            frequency[str[i]]++;
        }

        int ans = 0;
        for (auto ch : problems)
        {
            if (frequency[ch] < k)
            {
                ans += (k - frequency[ch]);
            }
        }

        cout << ans << newline;
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