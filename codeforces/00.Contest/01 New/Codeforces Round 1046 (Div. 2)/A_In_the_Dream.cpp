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
        int a, b, c, d;

        cin >> a >> b >> c >> d;

        auto is_OK = [&](int A, int B)
        {
            return max(A, B) <= 2 * (min(A, B) + 1);
        };

        bool first_halves = is_OK(a, b);
        bool second_halves = is_OK(c - a, d - b);

        if (first_halves && second_halves)
            cout << "YES";
        else
            cout << "NO";

        cout << newline;
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