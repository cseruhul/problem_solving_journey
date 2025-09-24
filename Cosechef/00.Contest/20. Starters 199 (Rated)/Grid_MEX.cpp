#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        vector<vector<int>> arr;

        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < n; j++)
            {
                int element = ((i + j) % n);
                row.push_back(element);
            }
            arr.push_back(row);
        }

        for (auto row : arr)
        {
            for (auto item : row)
            {
                cout << item << " ";
            }
            cout << newline;
        }
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