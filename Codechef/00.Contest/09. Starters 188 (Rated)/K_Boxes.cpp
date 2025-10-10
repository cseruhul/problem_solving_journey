#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> levels(n);
        vector<ll> gold_box(n);
        
        vector<pair<ll, ll>> idx_level_pair(n);
        
        priority_queue<ll, vector<ll>, greater<ll>> top_k_gold_boxes;
        
        vector<ll> ans(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> levels[i];
            idx_level_pair[i] = {levels[i], i};
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> gold_box[i];
        }

        sort(idx_level_pair.begin(), idx_level_pair.end());
        ll sum = 0;

        for (ll i = 0; i < n; i++)
        {
            ll idx = idx_level_pair[i].second;
            ans[idx] = sum;

            if (top_k_gold_boxes.size() < k)
            {
                sum += gold_box[idx];
                top_k_gold_boxes.push(gold_box[idx]);
            }
            else
            {
                if (top_k_gold_boxes.top() < gold_box[idx])
                {
                    sum -= top_k_gold_boxes.top();
                    top_k_gold_boxes.pop();

                    sum += gold_box[idx];
                    top_k_gold_boxes.push(gold_box[idx]);
                }
            }
        }

        for (auto item : ans)
            cout << item << " ";
        cout << "\n";
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