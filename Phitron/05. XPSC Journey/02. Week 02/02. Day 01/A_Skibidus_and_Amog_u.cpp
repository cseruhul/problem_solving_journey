#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        string str;
        cin >> str;

        str.pop_back();
        str.pop_back();

        str.push_back('i');

        cout << str << endl;
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
    {
        ruhul.solve();
    }

    return 0;
}