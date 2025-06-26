#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, zero = 0, one = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == 1)
                one++;
            else
                zero++;
        }

        int score = 0;

        score = min(zero, one);
        cout << score << endl;
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