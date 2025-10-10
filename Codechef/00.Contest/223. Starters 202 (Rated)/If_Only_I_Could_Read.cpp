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

        int l = -1, r = -1;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                l = i;
                r = i + 1;
                break;
            }
        }

        if (l == -1)
            cout << "-1" << newline;
        else
            cout << l << " " << r << newline;
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