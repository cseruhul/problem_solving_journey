#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, sereja = 0, dima = 0;
        cin >> n;

        vector<int> cards(n);

        for (int i = 0; i < n; i++)
            cin >> cards[i];

        int l = 0, r = n - 1, turn = 1;

        while (l <= r)
        {
            if (turn)
            {
                if (cards[l] > cards[r])
                {
                    sereja += cards[l];
                    l++;
                }
                else
                {
                    sereja += cards[r];
                    r--;
                }
            }
            else
            {
                if (cards[l] > cards[r])
                {
                    dima += cards[l];
                    l++;
                }
                else
                {
                    dima += cards[r];
                    r--;
                }
            }

            turn = 1 - turn;
        }

        cout << sereja << " " << dima << endl;
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