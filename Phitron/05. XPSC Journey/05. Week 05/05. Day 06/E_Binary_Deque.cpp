#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, target;
        cin >> n >> target;
        int sum = 0;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum < target)
        {
            cout << -1 << endl;
            return;
        }
        if (sum == target)
        {
            cout << 0 << endl;
            return;
        }

        int l = 0, r = 0, cnt = INT_MIN;

        sum = 0;

        while (r < n)
        {
            sum += arr[r];
            if (sum == target)
            {
                cnt = max(cnt, r - l + 1);
            }
            else
            {
                while (sum > target)
                {
                    sum -= arr[l];
                    l++;
                }
                if (sum == target)
                {
                    cnt = max(cnt, r - l + 1);
                }
            }
            r++;
        }
        cout << n - cnt << endl;
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