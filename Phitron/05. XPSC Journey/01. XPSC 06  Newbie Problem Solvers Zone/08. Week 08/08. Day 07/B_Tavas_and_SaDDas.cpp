#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string n;
        cin >> n;
        int N = n.size();
        int len = 0, ans = 0;

        for (int i = 0; i < N; i++)
        {
            if (n[N - i - 1] == '7')
            {
                ans += (1 << i);
            }
        }

        for (int i = 1; i < N; i++)
        {
            ans += (1 << i);
        }
        cout << ans + 1 << endl;
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