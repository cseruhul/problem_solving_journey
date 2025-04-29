#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<string> s(n);
        deque<string> dq;
        unordered_map<string, bool> str_mp;

        for (int i = 0; i < n; i++)
            cin >> s[i];

        for (int i = 0; i < n; i++)
        {
            dq.push_front(s[i]);
        }

        while (!dq.empty())
        {
            string program = dq.front();
            int n = program.size();
            if (str_mp.find(program) == str_mp.end())
            {
                cout << program[n - 2] << program[n - 1];
                str_mp[program] = true;
            }
            dq.pop_front();
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

/*
9
NAUTILUS
FIREFOX
GEDIT
FIREFOX
NAUTILUS
WINE
GIMP
TERMINAL
WINE

WINE TERMINAL GIMP WINEN AUTILUS FIREFOX GEDIT FIREFOX NAUTILUS

*/