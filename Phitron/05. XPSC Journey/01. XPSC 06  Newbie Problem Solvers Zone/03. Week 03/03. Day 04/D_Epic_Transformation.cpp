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
        map<ll, ll> frequency;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            frequency[x]++;
        }

        priority_queue<ll> nums;
        for (auto item : frequency)
            nums.push(item.second);

        while (!nums.empty())
        {
            if (nums.size() < 2)
            {
                break;
            }
            int first_val = nums.top();
            nums.pop();
            int second_val = nums.top();
            nums.pop();

            first_val--;
            second_val--;

            if (first_val >= 1)
                nums.push(first_val);

            if (second_val >= 1)
                nums.push(second_val);
        }

        ll ans = 0;

        while (!nums.empty())
        {
            ans += nums.top();
            nums.pop();
        }

        cout << ans << endl;
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