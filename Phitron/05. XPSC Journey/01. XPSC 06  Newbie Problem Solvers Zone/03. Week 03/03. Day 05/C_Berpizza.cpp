#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class CustomCompare
{
public:
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};

class Ruhul_Amin
{
public:
    void solve()
    {
        int q, customer_no = 1;
        cin >> q;
        vector<int> ans;
        multiset<pair<int, int>> monocarp;
        multiset<pair<int, int>, CustomCompare> polycarp;

        while (q--)
        {
            int op;
            cin >> op;

            if (op == 1)
            {
                int cost;
                cin >> cost;

                monocarp.insert({customer_no, cost});
                polycarp.insert({cost, customer_no});
                customer_no++;
            }
            else if (op == 2)
            {
                auto item = *monocarp.begin();
                ans.push_back(item.first);
                polycarp.erase({item.second, item.first});
                monocarp.erase({item.first, item.second});
            }
            else if (op == 3)
            {
                auto item = *polycarp.begin();
                ans.push_back(item.second);
                monocarp.erase({item.second, item.first});
                polycarp.erase({item.first, item.second});
            }
        }

        for (auto item : ans)
            cout << item << " ";

        cout << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}