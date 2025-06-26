#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        bool flag = true;
        cin >> n;
        vector<int> b(n);

        for (int i = 0; i < n - 1; i++)
            cin >> b[i];

        vector<int> a(n);
        a[0] = b[0];
        a[n - 1] = b[n - 2];

        for (int i = 1; i < n - 1; i++)
        {
            a[i] = b[i - 1] | b[i];
        }

        for (int i = 1; i < n; i++)
        {
            if ((a[i] & a[i - 1]) != b[i - 1])
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            for (auto item : a)
                cout << item << " ";
        }
        else
        {
            cout << -1;
        }
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