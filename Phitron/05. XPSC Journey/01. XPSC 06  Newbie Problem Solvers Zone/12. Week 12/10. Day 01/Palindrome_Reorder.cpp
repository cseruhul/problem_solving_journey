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
        string str;
        cin >> str;
        int n = str.size();

        map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[str[i]]++;

        int oddcount = 0;
        char middle_char;
        for (auto item : mp)
        {
            if (item.second % 2)
            {
                oddcount++;
                middle_char = item.first;
            }
        }

        if (oddcount > 1)
        {
            cout << "NO SOLUTION";
            return;
        }

        string ans = "";

        for (int i = 0; i < mp[middle_char]; i++)
            ans += middle_char;

        string left, right;

        for (auto item : mp)
        {
            char ch = item.first;
            int cnt = item.second;

            if (ch != middle_char)
            {
                for (int i = 0; i < cnt / 2; i++)
                    left += ch;
            }
        }

        right = left;
        reverse(right.begin(), right.end());

        cout << left << ans << right << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}