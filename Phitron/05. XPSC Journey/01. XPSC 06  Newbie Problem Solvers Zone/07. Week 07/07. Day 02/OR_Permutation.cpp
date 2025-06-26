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

        for (int i = n; i > 0; i--)
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