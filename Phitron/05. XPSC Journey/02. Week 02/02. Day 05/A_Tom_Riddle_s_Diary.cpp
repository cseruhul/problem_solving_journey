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
        map<string, bool> diary;

        while (t--)
        {
            string name;
            cin >> name;
            if (diary.find(name) == diary.end())
            {
                cout << "NO" << "\n";
                diary[name] = true;
            }
            else
            {
                cout << "YES" << "\n";
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