#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        int score_one = 0, score_two = 0;
        string one, two;
        cin >> n;
        cin >> one >> two;

        for (int i = 0; i < n; i++)
        {
            if (one[i] == 'R' && two[i] == 'S')
                score_one++;
            else if (one[i] == 'S' && two[i] == 'R')
                score_two++;
            else if (one[i] == 'S' && two[i] == 'P')
                score_one++;
            else if (one[i] == 'P' && two[i] == 'S')
                score_two++;
            else if (one[i] == 'P' && two[i] == 'R')
                score_one++;
            else if (one[i] == 'R' && two[i] == 'P')
                score_two++;
        }

        if (score_one > score_two)
        {
            cout << 0 << endl;
        }
        else if (score_two > score_one)
        {
            cout << score_two - score_one << endl;
        }
        else
        {
            cout << 1 << endl;
        }
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