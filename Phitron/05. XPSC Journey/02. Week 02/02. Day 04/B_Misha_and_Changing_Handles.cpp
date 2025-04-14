#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        cin >> t;

        map<string, string> ans, contains;

        while (t--)
        {
            string old_user, new_user;
            cin >> old_user >> new_user;

            if (contains.find(old_user) != contains.end())
            {
                string update_uer = contains[old_user];

                ans[update_uer] = new_user;
                contains.erase(old_user);
                contains[new_user] = update_uer;
            }
            else
            {
                ans[old_user] = new_user;
                contains[new_user] = old_user;
            }
        }

        cout << ans.size() << "\n";

        for (auto value : ans)
        {
            cout << value.first << " " << value.second << "\n";
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