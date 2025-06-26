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

        vector<stack<pair<ll, ll>>> movies;

        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;

            if (!movies.empty())
            {
                ll l = 0, r = movies.size();
                while (l < r)
                {
                    cout << "l = " << l << endl;
                    cout << "r = " << r << endl;
                    ll mid = (l + r) / 2;
                    if (movies[mid].top().second <= a)
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid;
                    }
                }
                if (l > 0 && movies[l - 1].top().second <= a)
                {
                    movies[l - 1].push({a, b});
                }
                else
                {
                    stack<pair<ll, ll>> stk;
                    stk.push({a, b});
                    movies.push_back(stk);
                }
            }
            else
            {
                stack<pair<ll, ll>> stk;
                stk.push({a, b});
                movies.push_back(stk);
            }
        }

        for (auto item : movies)
        {
            cout << item.size() << endl;
            while (!item.empty())
            {
                cout << item.top().first << " " << item.top().second << endl;
                item.pop();
            }

            cout << endl;
        }

        cout << endl;
        // cout << movies.size() << endl;
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