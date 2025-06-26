#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;

        int matching_pair = 0;
        int l = 0, r = str.size() - 1, zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
                zero++;
            else
                one++;
        }
        while (l < r)
        {

            if (str[l] == str[r])
            {
                matching_pair++;
            }

            l++, r--;
        }

        // cout << matching_pair << endl;
        // cout << zero << " " << one << endl;
        if (((matching_pair % 2) != (k % 2)))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
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