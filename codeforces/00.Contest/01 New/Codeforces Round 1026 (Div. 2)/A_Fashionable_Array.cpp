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
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        // for (auto item : arr)
        //     cout << item << " ";
        // cout << endl;

        int l = 0, r = n - 1;
        int ans = 0;
        while (l <= r)
        {
            if (arr[l] % 2 != arr[r] % 2)
            {
                l++;
                ans++;
            }
            else
            {
                break;
            }
        }

        int ans1 = 0;

        l = 0, r = n - 1;
        while (l <= r)
        {
            if (arr[l] % 2 != arr[r] % 2)
            {
                r--;
                ans1++;
            }
            else
            {
                break;
            }
        }
        cout << min(ans, ans1) << endl;
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