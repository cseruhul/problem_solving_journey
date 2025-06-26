#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, N;
        cin >> n;
        N = n * (n - 1) / 2;
        vector<ll> arr(N);
        vector<ll> ans;

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        for (int i = 0, j = n - 1; i < N; j--)
        {
            ans.push_back(arr[i]);
            i += j;
        }
        ans.push_back(ans.back());
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