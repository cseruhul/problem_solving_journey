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
        multiset<int> movie;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (a >= 7)
                movie.insert(b);
        }

        int cost = *movie.begin();

        if (movie.size() == 0)
        {
            cost = -1;
        }
        cout << cost << endl;
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