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
        string lights;
        cin >> lights;

        vector<int> line(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (lights[i] == '0')
                continue;

            line[i] = 1;

            if (i == 0 || line[i - 1] == 1)
                line[min(n - 1, i + 1)] = 1;
            else
                line[i - 1] = 1;
        }

        bool flag = true;
        for (auto item : line)
        {
            if (item == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Yes" << newline;
        else
            cout << "No" << newline;
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