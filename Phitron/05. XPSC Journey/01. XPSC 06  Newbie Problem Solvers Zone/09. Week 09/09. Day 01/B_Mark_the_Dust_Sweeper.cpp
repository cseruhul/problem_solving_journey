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
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = 0;
        while (true)
        {
            if (arr[i] != 0)
            {
                break;
            }
            i++;
        }

        ll sum = 0;
        ll zeros = 0;

        for (i; i < n - 1; i++)
        {
            sum += arr[i];
            if (arr[i] == 0)
                zeros++;
        }

        cout << (sum + zeros) << endl;
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