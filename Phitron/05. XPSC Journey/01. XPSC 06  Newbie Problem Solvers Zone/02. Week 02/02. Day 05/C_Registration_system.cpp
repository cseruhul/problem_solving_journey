#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        unordered_map<string, int> username;
        cin >> t;

        while (t--)
        {
            string str;
            cin >> str;

            if (username.find(str) == username.end())
            {
                cout << "OK" << "\n";
                username[str] = 1;
            }
            else
            {
                cout << str << username[str] << "\n";
                username[str]++;
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