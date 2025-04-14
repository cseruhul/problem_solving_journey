#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, even_count = 0, odd_count = 0;
        cin >> n;
        int arr[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < 2 * n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }

        if (even_count == odd_count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}