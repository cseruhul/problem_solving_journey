#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    int helper_good_sub_sequence(const vector<int> &arr, int n)
    {
        if (n == 0)
            return 0;
        vector<vector<int>> dp(n, vector<int>(2, 0));

        for(int i = 0; i< n; i++)
        {
            
        }
    }
    void solve()
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans;
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