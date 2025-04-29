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
        vector<int> v(5, n / 5);

        for (int i = 0; i < n % 5; i++)
        {
            v[i]++;
        }

        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < v[i];j++)
            {
                ans += vowel[i];
            }
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