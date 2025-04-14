#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        string name;
        vector<string> namelist;
        stack<string> ans;
        unordered_map<string, bool> freq;
        
        cin >> t;
        
        for (int i = 0; i < t; i++)
        {
            cin >> name;
            namelist.push_back(name);
        }

        for (int i = t - 1; i >= 0; i--)
        {
            name = namelist[i];

            if (freq.find(name) == freq.end())
            {
                ans.push(name);
                freq[name] = true;
            }

            while (!ans.empty())
            {
                cout << ans.top() << endl;
                ans.pop();
            }
        }
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