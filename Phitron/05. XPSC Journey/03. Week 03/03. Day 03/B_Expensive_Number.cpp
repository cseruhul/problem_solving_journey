#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string number;
        cin >> number;

        int n = number.size();
        int l = 0, r = n - 1;
        int remove = 0;
        while (number[r] == '0')
        {
            remove++;
            r--;
        }

        while (l < r)
        {
            if (number[l] != '0')
                remove++;
            l++;
        }

        cout << remove << endl;
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