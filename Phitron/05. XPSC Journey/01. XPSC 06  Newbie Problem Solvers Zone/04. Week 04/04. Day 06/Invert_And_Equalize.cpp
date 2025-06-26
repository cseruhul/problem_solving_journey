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
        string str;
        cin >> str;

        int l = 0, r = 0, zero_substr = 0, one_substr = 0;

        while (r < n)
        {
            char curr = str[l];
            if (curr != str[r])
            {
                if (curr == '0')
                    zero_substr++;
                else
                    one_substr++;
                l = r;
                r++;
            }
            else
            {
                r++;
            }
        }

        if (str[n - 1] == '0')
            zero_substr++;
        else
            one_substr++;

        cout << min(zero_substr, one_substr) << endl;
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