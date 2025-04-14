#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, number, ans;

        cin >> n;
        unordered_map<int, int> freq;
        unordered_set<int> num;

        for (int i = 0; i < n; i++)
        {
            cin >> number;
            freq[number]++;
            num.insert(number);
        }

        for (auto item : num)
        {
            if (freq[item] % 2 == 1)
                ans = item;
        }

        cout << ans << endl;
    }

    return 0;
}