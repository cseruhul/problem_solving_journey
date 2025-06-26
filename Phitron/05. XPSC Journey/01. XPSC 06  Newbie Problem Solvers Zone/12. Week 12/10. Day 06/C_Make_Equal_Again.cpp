#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

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

        // for (auto item : arr)
        //     cout << item << " ";
        // cout << endl;

        int left_number = arr[0], right_number = arr[n - 1];
        int l = 0, r = n - 1, r_idx = 0;

        while (l < n && arr[l] == left_number)
        {
            l++;
        }

        while (r >= 0 && arr[r] == right_number)
        {
            r--;
            r_idx++;
        }
        int ans;
        if (left_number == right_number)
        {
            ans = n - r_idx - l;
        }
        else
        {
            ans = n - max(l, r_idx);
        }

        if (ans <= 0)
            cout << 0 << newline;
        else
            cout << ans << newline;
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