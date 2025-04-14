#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, a, b;
        bool flag = true, turn = true;
        cin >> n >> a >> b;

        while (true)
        {
            if (turn)
            {
                if ((((a + 1) > n) && (a - 1) == b) || (((a - 1) == 0) && (a + 1) == b))
                {
                    flag = false;
                    break;
                }

                if (((a - 1) != b) && ((a - 1) != 0))
                    a--;
                else if (!((a + 1) > n) && ((a + 1) != b))
                    a++;

                turn = false;
            }
            else
            {
                if ((((b + 1) > n) && (b - 1) == a) || (((b - 1) == 0) && (b + 1) == a))
                {
                    break;
                }
                if (((b - 1) != a) && ((b - 1) != 0))
                    b--;
                else if (!((b + 1) > n) && ((b + 1) != a))
                    b++;

                turn = true;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}