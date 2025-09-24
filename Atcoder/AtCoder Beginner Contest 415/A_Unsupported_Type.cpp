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

        vector<int> arr(n);

        int item;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> item;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == item)
            {
                cout << "Yes" << newline;
                return;
            }
        }

        cout << "No" << newline;
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