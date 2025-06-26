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

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());

        int ans = 0;
        for (int k = 1; k <= 100; k++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (arr[l] + arr[r] == k)
                {
                    cnt++;
                    l++, r--;
                }
                else if (arr[l] + arr[r] > k)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
            ans = max(ans, cnt);
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