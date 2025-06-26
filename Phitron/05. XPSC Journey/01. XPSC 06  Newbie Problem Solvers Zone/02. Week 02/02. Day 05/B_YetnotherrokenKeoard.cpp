#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        cin >> t;
        stack<pair<char, int>> upper;
        stack<pair<char, int>> lower;
        unordered_map<int, bool> freq;

        while (t--)
        {
            string s;
            cin >> s;

            int n = s.size();

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'B' || s[i] == 'b')
                {
                    freq[i] = true;
                    if (s[i] == 'B' && !upper.empty())
                    {
                        freq[upper.top().second] = true;
                        upper.pop();
                    }
                    if (s[i] == 'b' && !lower.empty())
                    {
                        freq[lower.top().second] = true;
                        lower.pop();
                    }
                }
                else if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    upper.push({s[i], i});
                }
                else if (s[i] >= 'a' && s[i] <= 'z')
                {
                    lower.push({s[i], i});
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (freq[i] != true)
                {
                    cout << s[i];
                }
            }
            cout << "\n";

            while (!upper.empty())
            {
                upper.pop();
            }

            while (!lower.empty())
            {
                lower.pop();
            }
            freq.clear();
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