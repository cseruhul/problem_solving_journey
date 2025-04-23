#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        string bin;
        cin >> n >> bin;

        for (int i = 0; i < n; i++)
        {
            while (bin[i] != '1' && i < n)
            {
                i++;
            }

            if (i + 2 < n)
            {
                bin[i] = '1';
                bin[i + 1] = '0';
                bin[i + 2] = '0';
            }
        }

        cout << bin << endl;
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