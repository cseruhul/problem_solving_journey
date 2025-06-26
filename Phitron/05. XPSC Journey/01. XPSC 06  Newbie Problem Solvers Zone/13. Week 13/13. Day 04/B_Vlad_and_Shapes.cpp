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
        vector<string> grid;

        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            grid.push_back(x);
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int one = 0;
                for (int row = i; row < i + 2; row++)
                {
                    for (int col = j; col < j + 2; col++)
                    {
                        if (grid[row][col] == '1')
                        {
                            one++;
                        }
                    }
                }

                if (one == 3)
                {
                    cout << "TRIANGLE" << newline;
                    return;
                }
            }
        }

        cout << "SQUARE" << newline;
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