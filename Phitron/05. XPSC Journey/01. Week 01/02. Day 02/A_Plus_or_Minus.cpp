#include <bits/stdc++.h>
using namespace std;

class Solve
{
public:
    void solution()
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            cout << "+";
        else if (a - b == c)
            cout << "-";

        cout << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solve solve;

    int q;
    cin >> q;

    while (q--)
    {
        solve.solution();
    }

    return 0;
}