#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t, n;

        cin >> t;

        while (t--)
        {

            map<char, bool> char_mp;
            map<char, char> r;
            string s, ans, str;

            cin >> n;
            cin >> s;

            for (char ch : s)
            {
                char_mp[ch] = true;
            }

            for (auto ch : char_mp)
            {
                str.push_back(ch.first);
            }

            int left = 0, right = str.size() - 1;

            while (left <= right)
            {
                r[str[left]] = str[right];
                r[str[right]] = str[left];

                left++;
                right--;
            }

            for (auto ch : s)
                cout << r[ch];

            cout << "\n";
        }
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