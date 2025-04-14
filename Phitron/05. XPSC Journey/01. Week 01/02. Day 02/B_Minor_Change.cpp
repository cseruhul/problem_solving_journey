#include <bits/stdc++.h>
using namespace std;

class Solve
{
public:
    void solution()
    {
        string s, t;
        cin >> s >> t;

        int n, ans = 0;
        n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                ans++;
        }

        cout << ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve solve;

    solve.solution();

    return 0;
}