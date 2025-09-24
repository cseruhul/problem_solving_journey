#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= 100; j++)
            {
                if (arr[i] % prime[j] == 0)
                {
                    mp[prime[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int color = 1;

        cout << mp.size() << newline;
        for (auto item : mp)
        {
            for (auto num : item.second)
            {
                ans[num] = color;
            }
            color++;
        }

        for (auto item : ans)
            cout << item << " ";
        cout << newline;
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