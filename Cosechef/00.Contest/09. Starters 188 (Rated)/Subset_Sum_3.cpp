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

        for (int i = 0; i < (1 << n); i++)
        {
            int sum = 0;
            for (int k = n - 1; k >= 0; k--)
            {
                if ((1 << k) & i)
                {
                    sum += arr[k];
                }
            }

            if (sum != 0 && sum % 3 == 0)
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
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