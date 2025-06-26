#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        string str1, str2;
        cin >> n >> str1 >> str2;

        for (int i = 0; i < n; i++)
        {
            if (str1[i] == 'G')
                str1[i] = 'B';

            if (str2[i] == 'G')
                str2[i] = 'B';
        }

        if (str1 == str2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int q;
    cin >> q;

    while (q--)
        ruhul.solve();

    return 0;
}