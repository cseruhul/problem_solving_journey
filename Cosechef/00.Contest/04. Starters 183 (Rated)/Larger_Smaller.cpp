#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, min_x = INT_MAX, max_x = INT_MIN;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            min_x = min(min_x, arr[i]);
            max_x = max(max_x, arr[i]);
        }

        if (min_x == max_x)
            cout << "0" << endl;
        else
            cout << max_x - min_x - 1 << endl;
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