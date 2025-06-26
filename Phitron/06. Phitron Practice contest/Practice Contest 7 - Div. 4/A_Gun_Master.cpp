#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, d;
        int ans = 0;
        cin >> n >> d;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] > d)
            ans++;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > d && arr[i - 1] <= d)
            {
                ans++;
            }
            else if (arr[i] <= d && arr[i - 1] > d)
            {
                ans++;
            }
        }

        cout << ans << endl;
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