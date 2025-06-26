#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans = 0;
        cin >> n;
        string question;
        int str_len = 4 * n;
        unordered_map<char, int> char_freq;
        cin >> question;

        for (int i = 0; i < str_len; i++)
        {
            char_freq[question[i]]++;
        }

        for (auto item : char_freq)
        {
            if (item.first != '?')
            {
                if (item.second > n)
                {
                    ans += n;
                }
                else
                {
                    ans += item.second;
                }
            }
        }

        cout << ans << endl;
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