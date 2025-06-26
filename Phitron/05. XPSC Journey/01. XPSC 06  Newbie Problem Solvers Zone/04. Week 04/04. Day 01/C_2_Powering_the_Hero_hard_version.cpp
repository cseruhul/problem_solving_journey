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
        vector<ll> cards(n);
        ll power = 0;
        priority_queue<ll> bonus;

        for (int i = 0; i < n; i++)
        {
            cin >> cards[i];
        }

        for (auto item : cards)
        {
            if (item == 0 && !bonus.empty())
            {
                power += bonus.top();
                bonus.pop();
            }
            else
            {
                bonus.push(item);
            }
        }
        cout << power << endl;
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