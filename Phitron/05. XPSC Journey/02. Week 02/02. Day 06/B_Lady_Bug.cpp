#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, count1 = 0, count2 = 0;
        string s1, s2;
        cin >> n;
        cin >> s1 >> s2;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                count2 += s1[i] == '0';
                count1 += s2[i] == '0';
            }
            else
            {
                count1 += s1[i] == '0';
                count2 += s2[i] == '0';
            }
        }

        if (count1 >= (n + 1) / 2 && count2 >= n / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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