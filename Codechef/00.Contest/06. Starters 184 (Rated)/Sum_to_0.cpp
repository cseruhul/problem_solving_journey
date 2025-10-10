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
        vector<int> ans;
        vector<int> num = {1, 2, 3};

        if (n == 1)
        {
            cout << -1 << endl;
            return;
        }

        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                ans.push_back(num[i % 3]);
                ans.push_back(-num[i % 3]);
            }
            for (auto item : ans)
                cout << item << " ";
            cout << endl;
            return;
        }

        int minus_3 = n / 2;
        for (int i = 0; i < minus_3; i++)
            ans.push_back(-3);

        n = n - n / 2;

        for (int i = 1; i <= n; i++)
        {
            if (i >= 3)
                ans.push_back(3);
            else
                ans.push_back(i);
        }

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