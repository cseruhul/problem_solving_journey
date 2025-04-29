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
        vector<ll> sum(n);
        vector<ll> mx_num(n);
        multiset<ll> ans;
        ll mx = LLONG_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(mx, arr[i]);
            mx_num[i] = mx;
        }

        sum[n - 1] = arr[n - 1];
        for (int i = n - 2; i > 0; i--)
        {
            sum[i] = arr[i] + sum[i + 1];
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans.insert(mx_num[i] + sum[i + 1]);
        }
        ans.insert(mx_num.back());
        
        for (auto item : ans)
            cout << item << " ";
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

/*
arr = {13 5 10 14 8 15 13}
cumulative sum = 13, 13+

*/