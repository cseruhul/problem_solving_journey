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
        int zero = 0, non_zero = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                zero++;
            else
                non_zero++;
        }
        int ans;

        if (zero == 0)
            ans = 0;
        else
        {
            if (non_zero >= zero - 1)
            {
                ans = 0;
            }
            else
            {

                int mx = *max_element(arr.begin(), arr.end());

                if (mx == 1)
                {
                    ans = 2;
                }
                else
                {
                    ans = 1;
                }
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