#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        ll score = 0;
        bool turn = true;
        cin >> n;

        queue<ll> q;
        priority_queue<ll> pq;
        map<ll, ll> freq_mp;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            q.push(x);
            pq.push(x);
            freq_mp[x]++;
        }

        while (!q.empty())
        {
            if (turn == true)
            {
                while (!pq.empty())
                {
                    ll val = pq.top();
                    pq.pop();

                    if (freq_mp[val] > 0)
                    {
                        cout << val << " ";
                        score += val;
                        freq_mp[val]--;
                        break;
                    }
                }
            }
            else
            {
                ll val = q.front();
                q.pop();
                freq_mp[val]--;
            }

            turn = !turn;
        }

        cout << endl
             << score << endl;
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