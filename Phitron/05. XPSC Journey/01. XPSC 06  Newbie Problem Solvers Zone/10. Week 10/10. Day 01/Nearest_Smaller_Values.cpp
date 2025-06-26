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

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        stack<pair<ll, int>> stk;

        for (int i = 0; i < n; i++)
        {
            if (stk.empty())
            {
                cout << 0 << " ";
            }
            else
            {
                if (stk.top().first < arr[i])
                {
                    cout << stk.top().second << " ";
                }
                else
                {
                    while (!stk.empty() && stk.top().first >= arr[i])
                    {
                        stk.pop();
                    }

                    if (stk.empty())
                    {
                        cout << 0 << " ";
                    }
                    else
                    {
                        cout << stk.top().second << " ";
                    }
                }
            }

            stk.push({arr[i], i + 1});
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