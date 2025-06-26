#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k, idx;
        cin >> n >> k;
        idx = n;
        for (; idx > k + 1; --idx)
        {
            cout << idx << " ";
        }
        // idx--;
        for (int i = 1; i <= idx; i++)
            cout << i << " ";

        cout << endl;
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