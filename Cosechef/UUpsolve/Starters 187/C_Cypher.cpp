#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> wheel(n);

        for (int i = 0; i < n; i++)
        {
            cin >> wheel[i];
        }

        for (int i = 0; i < n; i++)
        {
            int str_sz;
            string moves;
            cin >> str_sz >> moves;

            for (auto ch : moves)
            {
                if (ch == 'U')
                {
                    wheel[i]--;
                    if (wheel[i] < 0)
                        wheel[i] = 9;
                }
                if (ch == 'D')
                {
                    wheel[i]++;
                    if (wheel[i] > 9)
                        wheel[i] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << wheel[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    int q;
    cin >> q;

    while (q--)
    {
        ruhul.solve();
    }

    return 0;
}