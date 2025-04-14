#include <bits/stdc++.h>
using namespace std;

/*UNSOLVED */
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, x, number, even = 0, odd = 0, needed_odd, needed_even;
        cin >> n >> x;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> number;
            arr[i] = number;
            if (number % 2)
                odd++;
            else
                even++;
        }

        if (x % 2 == 0)
        {
            if (even == odd)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            needed_even = x / 2;          // 1
            needed_odd = x - needed_even; // 2
            // cout << "Odd = " << odd << " Even = " << even << " " << endl;
            // cout << "needed odd = " << needed_odd << " needed even = " << needed_even << " " << endl;

            if ((needed_odd % 2 == 1) && (needed_odd <= odd))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    }

    return 0;
}