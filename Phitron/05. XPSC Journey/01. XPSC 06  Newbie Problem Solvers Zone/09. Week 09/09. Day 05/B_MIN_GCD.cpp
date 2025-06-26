#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        vector<ll> min_arr(n, arr[0]);
        vector<ll> gcd_arr(n);
        for (auto item : arr)
            cout << item << " ";
        cout << endl;
        cout << "-----------" << endl;
        gcd_arr[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            gcd_arr[i] = __gcd(gcd_arr[i + 1], arr[i]);
        }

        for (auto item : min_arr)
            cout << item << " ";
        cout << endl;

        for (auto item : gcd_arr)
            cout << item << " ";
        cout << endl;
        cout << "-----------" << endl;
        sort(arr.begin(), arr.end(), greater<ll>());
        vector<ll> min_arr1(n);
        vector<ll> gcd_arr1(n);

        min_arr1[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            min_arr1[i] = min(min_arr1[i - 1], arr[i]);
        }

        gcd_arr1[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            gcd_arr1[i] = __gcd(gcd_arr1[i + 1], arr[i]);
        }

        for (auto item : min_arr1)
            cout << item << " ";
        cout << endl;

        for (auto item : gcd_arr1)
            cout << item << " ";
        cout << endl;

        cout << "-----------" << endl;
        cout << endl;
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