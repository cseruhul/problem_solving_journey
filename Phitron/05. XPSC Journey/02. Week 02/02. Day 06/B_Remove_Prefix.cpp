#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        unordered_map<int, bool> number_map;
        cin >> t;

        while (t--)
        {
            int n, r;
            cin >> n;
            vector<int> arr(n);
            r = n - 1;

            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            for (r; r >= 0; r--)
            {
                if (number_map.find(arr[r]) != number_map.end())
                {
                    break;
                }
                else
                {
                    number_map[arr[r]] = true;
                }
            }
            cout << ++r << endl;

            number_map.clear();
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