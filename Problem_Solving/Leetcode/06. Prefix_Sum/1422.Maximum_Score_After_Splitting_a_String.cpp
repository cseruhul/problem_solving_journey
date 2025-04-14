#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(string s)
    {
        int ans = INT_MIN, zero = 0, one = 0;
        int n = s.size();

        vector<int> zeros_sum(n);
        vector<int> ones_sum(n);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
            zeros_sum[i] = zero;
        }

        for (int j = n - 1; j >= 0; j--)
        {
            if (s[j] == '1')
                one++;
            ones_sum[j] = one;
        }

        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, zeros_sum[i] + ones_sum[i + 1]);
        }

        for (auto item : zeros_sum)
            cout << item << " ";
        cout << endl;

        for (auto item : ones_sum)
            cout << item << " ";
        cout << endl;
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Solution obj;
        string s;
        cin >> s;

        int ans = obj.maxScore(s);

        cout << ans << endl;
    }

    return 0;
}