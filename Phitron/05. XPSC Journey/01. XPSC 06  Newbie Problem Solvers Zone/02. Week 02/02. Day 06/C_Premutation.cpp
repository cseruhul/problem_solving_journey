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
        vector<vector<int>> arr;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < n - 1; j++)
            {
                int number;
                cin >> number;
                row.push_back(number);
            }
            arr.push_back(row);
        }

        for (int i = 0; i < n; i++)
        {
            mp[arr[i][n - 2]]++;
        }

        int unique, last_item, row;

        for (auto item : mp)
        {
            if (item.second == 1)
            {
                unique = item.first;
            }
            else
            {
                last_item = item.first;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][n - 2] == unique)
            {
                row = i;
                break;
            }
        }
        for (auto item : arr[row])
            cout << item << " ";
        cout << last_item;

        cout << "\n";
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