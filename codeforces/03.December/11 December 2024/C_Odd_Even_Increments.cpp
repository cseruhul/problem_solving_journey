#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, even, odd, flag = 1;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        even = arr[0];
        odd = arr[1];

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if ((even % 2) != (arr[i] % 2))
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if ((odd % 2) != (arr[i] % 2))
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}