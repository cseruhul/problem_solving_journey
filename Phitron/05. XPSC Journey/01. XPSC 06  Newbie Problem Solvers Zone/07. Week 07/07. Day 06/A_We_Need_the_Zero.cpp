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

        vector<int> arr(n);

        int x_or = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x_or ^= arr[i];
        }

        if (x_or == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2)
            {
                cout << x_or << endl;
            }
            else
            {
                cout << -1 << endl;
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