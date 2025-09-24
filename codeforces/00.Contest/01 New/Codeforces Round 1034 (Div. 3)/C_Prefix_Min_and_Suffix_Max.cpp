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

        vector<int> prefix(n);
        prefix[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = min(prefix[i - 1], arr[i]);
        }

        vector<int> suffix(n);
        suffix[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = max(suffix[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == prefix[i])
                cout << '1';
            else if (arr[i] == suffix[i])
                cout << '1';
            else
                cout << '0';
        }
        cout << newline;
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