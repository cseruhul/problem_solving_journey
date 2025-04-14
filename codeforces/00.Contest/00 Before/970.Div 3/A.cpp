#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int arr[n];
        int score = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j] && arr[i] != 0)
                {
                    arr[i] = 0;
                    arr[j] = 0;
                    score++;
                }
            }
        }

        cout << score << endl;
    }

    return 0;
}