#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void solve()
    {
        int n, m, k;
        cin >> n >> m >> k;

        if (n <= min(m, k))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
};

int main()
{
    Solution obj;

    obj.solve();

    return 0;
}