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
        string vowel = "aeiou";
        string ans;

        for (int i = 0; i < n && i < 5; i++)
            ans += vowel[i];

        for (int i = 0; i < n - 5; i++)
        {
            ans += vowel[4];
        }

        cout << ans << endl;
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