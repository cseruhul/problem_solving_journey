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
        int mn, mx = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        mn = arr[0];
        mx = arr[0];

        for (int i = 0; i < n; i++)
        {
            mn &= arr[i];
            mx |= arr[i];
        }

        cout << mx - mn << endl;
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