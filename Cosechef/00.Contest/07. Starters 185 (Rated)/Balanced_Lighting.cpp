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
        int red = 0, blue = 0, no_light = 0, diff = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                red++;
            else if (x == 2)
                blue++;
            else
                no_light++;
        }

        if (n % 2)
        {
            cout << "No" << endl;
            return;
        }
        diff = abs(red - blue);

        int less_color = min(red, blue);

        if (no_light < diff)
        {
            cout << "No" << endl;
            return;
        }
        else
        {
            if (diff == no_light)
                cout << "Yes" << endl;
            else
            {
                if ((diff - no_light) % 2)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
        }
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