#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr(m + 1);

        for (int i = 0; i <= m; i++)
            cin >> arr[i];

        int frnd = 0;

        for (int i = 0; i < m; i++)
        {

            int fedora = arr[m];
            int diff_bits = 0;

            for (int j = 0; j < 20; j++)
            {
                if (((fedora >> j) & 1) != ((arr[i] >> j) & 1))
                    diff_bits++;
            }

            if (diff_bits <= k)
                frnd++;
        }
        cout << frnd;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}