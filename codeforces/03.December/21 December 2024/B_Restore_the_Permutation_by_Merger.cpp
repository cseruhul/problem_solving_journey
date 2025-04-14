#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, num;
        cin >> n;
        vector<int> freq(n + 1, 0);
        vector<int> ans;

        for (int i = 0, j = 0; i < 2 * n; i++)
        {
            cin >> num;
            if (freq[num] == 0)
            {
                ans.push_back(num);
                freq[num] = 1;
            }
        }

        for (auto item : ans)
        {
            cout << item << " ";
        }

        cout << endl;
    }

    return 0;
}