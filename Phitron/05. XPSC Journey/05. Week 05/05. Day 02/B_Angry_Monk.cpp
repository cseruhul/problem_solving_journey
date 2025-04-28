#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, ans = 0;
        int k;
        cin >> n >> k;
        vector<int> pieces(k);

        for(int i = 0; i < k; i++)
        {
            cin >> pieces[i];
        }

        sort(pieces.rbegin(), pieces.rend());


        for(int i = 1; i < k; i++)
        {
            if(pieces[i] == 1)
            {
                ans++;
            }else {
                ans += pieces[i] + pieces[i] - 1;
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