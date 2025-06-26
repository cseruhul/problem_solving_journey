#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, x;
        bool flag = true;
        cin >> n >> x;
        string str;
        cin >> str;
        int swipe = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                swipe--;
            }
            else
            {
                swipe = x;
            }

            if (swipe < 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";

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