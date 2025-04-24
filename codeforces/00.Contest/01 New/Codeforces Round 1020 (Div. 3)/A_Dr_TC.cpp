#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        string str, temp;
        cin >> n >> str;
        vector<string> board;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                temp = str;
                temp[i] = (temp[i] == '1') ? '0' : '1';
            }

            board.push_back(temp);
        }

        for (auto item : board)
            for (auto ch : item)
            {
                if (ch == '1')
                    ans++;
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