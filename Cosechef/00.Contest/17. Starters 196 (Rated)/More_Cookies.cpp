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
        int n, c;
        cin >> n >> c;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0;
        int cnt = 0;

        for (int i = 0;; i++)
        {
            int c2 = cnt + c;

            bool smaller_than_Alice = false;
            bool equal_Alice = false;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == c2)
                {
                    equal_Alice = true;
                    break;
                }

                if (arr[i] < c2)
                {
                    smaller_than_Alice = true;
                }
            }

            if (!equal_Alice and smaller_than_Alice)
            {
                ans = cnt;
                break;
            }

            cnt++;
        }

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