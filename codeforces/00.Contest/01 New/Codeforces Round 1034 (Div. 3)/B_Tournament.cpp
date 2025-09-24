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
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx_strength = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mx_strength)
            {
                mx_strength = arr[i];
            }
        }

        if (k >= 2)
            cout << "YES" << newline;
        else if (mx_strength == arr[j - 1])
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
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