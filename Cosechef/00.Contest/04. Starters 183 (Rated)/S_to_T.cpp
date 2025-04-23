#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        string S, T;
        cin >> S >> T;

        vector<int> ans;
        bool soln = true;

        if (S[0] != T[0])
        {
            cout << -1 << endl;
            return;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (S[i] != T[i])
            {
                if (S[i] == '1')
                {
                    S[i + 1] = (S[i + 1] == '0') ? '1' : '0';
                    ans.push_back(i);
                }
            }
        }

        if (soln)
        {
            cout << ans.size() << endl;
            for (auto item : ans)
                cout << item << " ";
        }
        else
        {
            cout << -1;
        }

        cout << endl;
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