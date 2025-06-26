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

        if (n % 2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES" << endl;
            // char ch = 'A';
            for (int i = 0; i < n - 1; i++)
            {
                if (i % 2 == 1)
                {
                    cout << "B";
                }
                else
                    cout << "AA";
            }
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