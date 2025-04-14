#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        unordered_set<string> st;
        string s;
        int t;
        cin >> t;
        cin.ignore();

        while (t--)
        {
            getline(cin, s);
            st.insert(s);
        }

        cout << st.size();
        st.clear();
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