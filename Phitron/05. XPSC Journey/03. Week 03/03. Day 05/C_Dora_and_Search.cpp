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
        multiset<int> increasing_set;
        multiset<int, greater<int>> decreasing_set;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            increasing_set.insert(arr[i]);
            decreasing_set.insert(arr[i]);
        }

        int l = 0, r = n - 1;

        while (l <= r)
        {
            if (arr[l] == *increasing_set.begin() || arr[l] == *decreasing_set.begin())
            {
                increasing_set.erase(arr[l]);
                decreasing_set.erase(arr[l]);

                l++;
            }
            if (arr[r] == *increasing_set.begin() || arr[r] == *decreasing_set.begin())
            {
                increasing_set.erase(arr[r]);
                decreasing_set.erase(arr[r]);

                r--;
            }

            if ((arr[r] != *increasing_set.begin() && arr[r] != *decreasing_set.begin()) && (arr[l] != *increasing_set.begin() && arr[l] != *decreasing_set.begin()))
            {
                break;
            }
        }

        if ((r - l) <= 1)
        {
            cout << -1;
        }
        else
        {
            cout << l + 1 << " " << r + 1;
        }

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