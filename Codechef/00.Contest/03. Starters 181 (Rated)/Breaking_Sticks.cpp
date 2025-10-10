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

        while (t--)
        {
            int break_point = 0, n, sticks;
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cin >> sticks;
                break_point += (sticks - 1);
            }

            cout << break_point << endl;
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