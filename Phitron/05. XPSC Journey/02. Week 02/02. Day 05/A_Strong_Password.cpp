#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        stack<char> stk;
        unordered_map<char, bool> char_map;
        cin >> t;

        while (t--)
        {
            int idx;
            string s, ans;
            bool duplicate = false;
            cin >> s;
            int n;

            n = s.size();

            for (int i = 0; i < n; i++)
            {
                char_map[s[i]] = true;
            }

            for (int i = 0; i < n; i++)
            {
                if (!stk.empty() && stk.top() == s[i])
                {
                    duplicate = true;
                    idx = i;
                    break;
                }

                stk.push(s[i]);
            }

            if (duplicate == false)
            {
                ans = s;
                char ch = 'a';
                while (char_map.find(ch) != char_map.end())
                {
                    ch++;
                }
                cout << ch << ans << endl;
            }
            else
            {
                while (!stk.empty())
                {
                    ans.push_back(stk.top());
                    stk.pop();
                }
                reverse(ans.begin(), ans.end());
                char ch = 'a';
                while (char_map.find(ch) != char_map.end())
                {
                    ch++;
                }
                ans.push_back(ch);
                for (idx; idx < n; idx++)
                {
                    ans.push_back(s[idx]);
                }

                cout << ans << endl;
            }
            char_map.clear();
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