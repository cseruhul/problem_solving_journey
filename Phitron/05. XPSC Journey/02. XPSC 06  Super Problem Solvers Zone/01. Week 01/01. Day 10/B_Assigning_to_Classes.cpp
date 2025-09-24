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
        vector<int> arr(2 * n);

        for (int i = 0; i < 2 * n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end());
        // for (auto item : arr)
        //     cout << item << " ";
        // cout << newline;

        cout << arr[n] - arr[n - 1] << newline;
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