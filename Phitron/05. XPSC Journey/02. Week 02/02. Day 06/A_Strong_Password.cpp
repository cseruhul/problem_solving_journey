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
                char ch = s[n - 1] + 1;
                if (ch > 'z')
                    ch = 'a';
                else if (ch < 'a')
                    ch = 'z';

                cout << ans << ch << endl;
            }
            else
            {
                while (!stk.empty())
                {
                    ans.push_back(stk.top());
                    stk.pop();
                }
                reverse(ans.begin(), ans.end());
                char ch = s[idx] + 1;
                if (ch > 'z')
                    ch = 'a';
                else if (ch < 'a')
                    ch = 'z';
                ans.push_back(ch);
                for (idx; idx < n; idx++)
                {
                    ans.push_back(s[idx]);
                }

                cout << ans << endl;
            }
            char_map.clear();
            while (!stk.empty())
            {
                stk.pop();
            }
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