#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans = 0;
        cin >> n;
        int neg_count = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                arr[i] = 0;
                neg_count++;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] <= 0)
            {
                ans++;
            }
            else
            {
                break;
            }
        }

        cout << neg_count - ans << endl;
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