#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m, max_number = INT_MIN;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            max_number = max(max_number, b[i]);
        }

        sort(a.begin() + (n - max_number), a.begin() + n);

        for (auto item : a)
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