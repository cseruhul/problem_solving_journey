#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, idx = -1;
        cin >> n;
        vector<long long> cabin(n);
        long long sum = 0, token = 0, capacity;

        for (int i = 0; i < n; i++)
        {
            cin >> cabin[i];
            sum += cabin[i];
        }
        sort(cabin.rbegin(), cabin.rend());

        int q;
        cin >> q;

        while (q--)
        {
            int x, y;
            cin >> x >> y;

            for (int i = 0; i < n; i++)
            {
                if (cabin[i] < x)
                {
                    idx = i - 1;
                    break;
                }
            }

            if (idx < 0)
            {
                token = x - cabin[0];
                capacity = sum - cabin[0];
            }
            else
            {
                capacity = sum - cabin[idx];
            }

            if (y > capacity)
            {
                token += y - capacity;
            }
            cout << token << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}