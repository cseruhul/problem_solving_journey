#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;

        for (int i = 1; i <= 9; i += 2)
        {
            for (int j = 1; j <= 10; j++)
            {
                if ((i * j) % 10 == d)
                {
                    // cout << i * j << " " << i << endl;
                    cout << i << " ";
                    break;
                }
            }
        }

        cout << endl;
    }

    return 0;
}