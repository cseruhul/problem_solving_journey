#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char r, c;
    cin >> t;

    while (t--)
    {
        cin >> c >> r;

        for (char rr = '1'; rr <= '8'; rr++)
        {
            for (char cc = 'a'; cc <= 'h'; cc++)
            {
                if (cc == c && rr != r)
                {
                    cout << cc << rr << endl;
                }
                else if (rr == r && cc != c)
                {
                    cout << cc << rr << endl;
                }
            }
        }
    }

    return 0;
}