#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        multiset<int> numbers;
        vector<pair<int, int>> ans;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            numbers.insert(i);
        }

        for (int i = 1; i < n; i++)
        {
            auto it = numbers.end();
            it--;
            int val1 = *it;
            numbers.erase(it);

            it = numbers.end();
            it--;
            int val2 = *it;
            numbers.erase(it);

            int new_value = (val1 + val2 + 1) / 2;
            numbers.insert(new_value);

            ans.push_back({val1, val2});
        }

        cout << *numbers.begin() << endl;
        for (auto item : ans)
            cout << item.first << " " << item.second << endl;
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