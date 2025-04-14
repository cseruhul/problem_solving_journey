#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int ans = 0;
        int n = arr.size();

        vector<int> prefix(n);

        prefix[0] = arr[0];

        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if ((j - i + 1) % 2 == 1)
                {
                    if (i == 0)
                        ans += prefix[j];
                    else
                        ans += prefix[j] - prefix[i - 1];
                }
            }
        }

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
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans;
        Solution obj;
        ans = obj.sumOddLengthSubarrays(arr);

        cout << ans << endl;
    }

    return 0;
}