#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string str;
        cin >> str;

        int n = str.size(), zero = 0, one = 0, exit_idx;

        for (char ch : str)
        {
            if (ch == '0')
                zero++;
            else
                one++;
        }

        if (zero == n || one == n)
        {
            cout << n << endl;
            return;
        }

        if (zero == one)
        {
            cout << 0 << endl;
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
                one--;
            else
                zero--;

            if (one < 0 || zero < 0)
            {
                exit_idx = i;
                break;
            }
        }

        cout << n - exit_idx << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}