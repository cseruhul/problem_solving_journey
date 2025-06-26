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

        for (int i = 0; i < (1 << n); i++)
        {
            for (int k = n - 1; k >= 0; k--)
            {
                if ((1 << k) & i)
                {
                    cout << k + 1 << " ";
                }
            }
            cout << endl;
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