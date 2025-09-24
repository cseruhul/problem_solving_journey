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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> occur(n + 2, 0);
        vector<int> common(n + 2, 0);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                common[a[i]]++;
                occur[a[i]] += 2;
            }
            else
            {
                occur[a[i]]++;
                occur[b[i]]++;
            }
        }

        int MEX1 = 0;
        while (occur[MEX1] > 0)
        {
            MEX1++;
        }

        vector<int> arr;

        for (int i = 0; i < MEX1; i++)
        {
            if (occur[i] >= 1 && common[i] == 0)
            {
                arr.push_back(i);
            }
        }

        int MEX2;

        if (arr.size() >= 2)
        {
            MEX2 = arr[1];
        }
        else
        {
            MEX2 = n + 1;
        }

        cout << min(MEX1, MEX2) << newline;
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