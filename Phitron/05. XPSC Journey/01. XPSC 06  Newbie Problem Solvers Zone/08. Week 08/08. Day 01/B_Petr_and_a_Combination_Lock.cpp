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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = false;

        for (int mask = 0; mask < (1 << n); mask++)
        {
            int pointer = 0;
            for (int k = n - 1; k >= 0; k--)
            {
                if ((1 << k) & mask)
                {
                    pointer += arr[k];
                }
                else
                {
                    pointer -= arr[k];
                }
            }

            if (pointer % 360 == 0)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << " YES";
        else
            cout << " NO";
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