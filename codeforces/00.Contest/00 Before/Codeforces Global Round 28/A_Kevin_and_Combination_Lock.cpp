#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, flag = 0;
        cin >> x;

        if (x % 33 == 0)
        {
            flag = 1;
        }
        // else
        // {

        //     while (x > 33)
        //     {
        //         x = x % 33;

        //         if(x == 0)
        //             flag = 1;
        //         else
        //             flag = 0;
        //     }
        // }

        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}