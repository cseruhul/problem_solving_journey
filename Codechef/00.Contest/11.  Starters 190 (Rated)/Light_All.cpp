#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        string str;
        stack<char> stk;
        bool flag = true;
        cin >> str;

        for (auto item : str)
            stk.push(item);

        while (stk.size() > 1)
        {
            char ch = stk.top();
            stk.pop();

            if (ch == stk.top() && ch == '0')
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Yes" << newline;
        else
            cout << "No" << newline;
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