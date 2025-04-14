#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    stack<pair<long long, int>> stk;
    unordered_map<long long, int> mp;

    while (q--)
    {
        int operation;
        long long number;
        cin >> operation;

        if (operation == 1)
        {
            cin >> number;
            mp[number]++;
            int freq = mp[number];

            if (stk.empty())
            {
                stk.push({number, freq});
            }
            else if (freq >= stk.top().second)
            {
                if (freq > stk.top().second)
                    stk.push({number, freq});
                else if (freq == stk.top().second)
                {
                    if (number > stk.top().first)
                        stk.push({number, freq});
                }
            }
        }
        else if (operation == 2)
        {
            if (stk.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << stk.top().first << endl;
                mp[stk.top().first] = mp[stk.top().first] / 2;
                stk.pop();
            }
        }
    }

    return 0;
}