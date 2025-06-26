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

        ll num1 = 0, num2 = 0;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr.begin(), arr.end(), greater<ll>());
        for (auto item : arr)
            cout << item << " ";
        cout << newline;
        for (int i = 0; i < n; i++)
        {
            ll x;
            x = arr[i];

            if ((num1 + x) <= num2)
            {
                num1 += x;
            }
            else
            {
                num2 += x;
            }
        }

        cout << abs(num1 - num2);
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