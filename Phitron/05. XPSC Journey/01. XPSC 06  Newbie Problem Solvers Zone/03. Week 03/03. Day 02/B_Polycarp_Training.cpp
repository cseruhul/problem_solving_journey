#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, number_of_problems = 1;
        cin >> n;

        vector<int> problems(n);

        for (int i = 0; i < n; i++)
        {
            cin >> problems[i];
        }

        sort(problems.begin(), problems.end());

        for (int i = 0; i < n; i++)
        {
            if (problems[i] >= number_of_problems)
                number_of_problems++;
        }
        cout << (number_of_problems - 1) << endl;
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