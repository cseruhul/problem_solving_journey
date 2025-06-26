#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int k, n, odd = 0;
        string str;
        cin >> k >> n >> str;

        vector<int> char_freq(26);

        for (int i = 0; i < k; i++)
        {
            char_freq[str[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            char_freq[i] = char_freq[i] % 2;
            if (char_freq[i] == 1)
                odd++;
        }

        if ((odd - n) <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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