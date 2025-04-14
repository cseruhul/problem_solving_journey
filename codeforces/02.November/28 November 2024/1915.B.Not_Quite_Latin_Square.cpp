#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char square[3][3];
        char ch = 'A' ^ 'B' ^ 'C', present = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> square[i][j];
            }
        }

        for (int i = 0; i < 3; i++)
        {
            ch = 'A' ^ 'B' ^ 'C', present = 0;
            for (int j = 0; j < 3; j++)
            {
                if (square[i][j] != '?')
                {
                    present = present ^ square[i][j];
                }
            }
            if ((ch ^ present) != 0)
                cout << char(ch ^ present) << endl;
        }
    }

    return 0;
}