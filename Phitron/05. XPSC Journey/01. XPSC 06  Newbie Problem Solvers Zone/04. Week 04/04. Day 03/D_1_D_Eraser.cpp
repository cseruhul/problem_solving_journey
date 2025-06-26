#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        int no_of_op = 0;
        string color_strip;
        cin >> color_strip;

        for (int i = 0; i < n; i++)
        {
            if (color_strip[i] == 'B')
            {
                no_of_op++;
                i += k - 1;
            }
        }

        cout << no_of_op << endl;
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