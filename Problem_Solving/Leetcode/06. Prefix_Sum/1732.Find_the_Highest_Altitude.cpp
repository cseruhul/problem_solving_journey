#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int n = gain.size();
        vector<int> altitude(n + 1);
        altitude[0] = 0;

        for (int i = 0; i < n; i++)
        {
            altitude[i + 1] = altitude[i] + gain[i];
        }

        // for (auto item : altitude)
        //     cout << item << " ";

        int ans = *max_element(altitude.begin(), altitude.end());

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> gain(n);

        for (int i = 0; i < n; i++)
        {
            cin >> gain[i];
        }

        // for (auto item : gain)
        //     cout << item << " ";

        Solution obj;
        // cout << endl;
        int ans = obj.largestAltitude(gain);

        cout << ans << endl;
    }

    return 0;
}