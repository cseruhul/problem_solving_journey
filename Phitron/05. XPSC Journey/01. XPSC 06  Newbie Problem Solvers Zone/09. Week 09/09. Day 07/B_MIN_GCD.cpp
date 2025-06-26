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

        sort(arr.begin(), arr.end());

        if (arr[0] == arr[1])
        {
            cout << "Yes" << newline;
            return;
        }

        if (arr[0] == 1)
        {
            ll gcd = 0;
            for (int i = 1; i < n; i++)
            {
                gcd = __gcd(gcd, arr[i]);
            }

            if (gcd == 1)
            {
                cout << "Yes" << newline;
                return;
            }
        }

        vector<ll> div;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] % arr[0] == 0)
            {
                div.push_back(arr[i]);
            }
        }

        if (div.size() < 2)
        {
            cout << "No" << newline;
        }
        else
        {
            ll gcd = 0;
            for (int i = 0; i < div.size(); i++)
            {
                gcd = __gcd(gcd, div[i]);
            }

            if (arr[0] == gcd)
                cout << "Yes" << newline;
            else
                cout << "No" << newline;
        }
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