#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int p1, p2, k, last_move = 0;
        cin >> p1 >> p2 >> k;
        bool turn = true, win = true;

        if (max(p1, p2) > k)
        {
            if (max(p1, p2) == p1)
            {
                p1 = p1 - k;
            }
            else
            {
                p2 = p2 - k;
            }
            last_move = k;
        }
        else if (max(p1, p2) <= k)
        {

            if (max(p1, p2) == p1)
            {
                last_move = p1;
                p1 = 0;
            }
            else
            {
                last_move = p2;
                p2 = 0;
            }
        }
        if (max(p1, p2) > last_move)
        {
            win = 0;
        }
        else
        {
            win = 1;
        }

        if (win)
            cout << "Alice" << newline;
        else
            cout << "Bob" << newline;
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