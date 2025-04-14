#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;

        cin >> t;

        while (t--)
        {
            int n, sum = 0, number;
            unordered_map<int, bool> mp;
            vector<int> arr;
            bool flag = true;

            cin >> n;
            // cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> number;
                arr.push_back(number);
                mp[number] = true;
            }

            sum = arr[0] + arr[0];

            if (mp[sum] != true)
            {
                cout << arr[0] << " " << arr[0] << endl;
                continue;
            }

            for (int i = 0; i < n; i++)
            {
                sum = arr[i] + arr[i];

                if (mp[sum] != true)
                {
                    cout << arr[i] << " " << arr[i] << endl;
                    flag = false;
                    break;
                }
            }

            if (flag == true)
                cout << -1 << endl;
        }
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