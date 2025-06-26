#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        unordered_map<string, string> username;
        unordered_map<string, string> ans;
        string old_username, new_username;

        int t;
        cin >> t;

        while (t--)
        {
            cin >> old_username >> new_username;
            username[old_username] = new_username;
        }
        for (auto usr : username)
        {
            string old_usr, new_usr;
            old_usr = usr.first;
            new_usr = usr.second;
            cout << old_usr << "->" << new_usr << endl;
            while (username.find(new_usr) != username.end())
            {
                new_usr = username[new_usr];
            }
            
                ans[old_usr] = new_usr;
        }
        cout << endl
             << endl;
        for (auto item : ans)
            cout << item.first << " " << item.second << endl;
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