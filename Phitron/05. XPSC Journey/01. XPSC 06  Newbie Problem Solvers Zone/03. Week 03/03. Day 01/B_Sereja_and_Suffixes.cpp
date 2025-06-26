#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n + 1);
        vector<int> ans(n + 1);
        set<int> num_set;

        for (int i = 1; i <= n; i++)
        {
            int number;
            cin >> number;
            arr[i] = number;
        }

        for (int i = n; i > 0; i--)
        {
            num_set.insert(arr[i]);
            ans[i] = num_set.size();
        }

        while (m--)
        {
            int number;
            cin >> number;

            cout << ans[number] << endl;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}