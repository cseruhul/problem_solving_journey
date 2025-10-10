#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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

        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                sum1 += arr[i];
            else
                sum2 += arr[i];
        }

        cout << max(sum1, sum2) << endl;
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