#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, f, k, i, favourite, del = 0, not_del = 0;
        cin >> n >> f >> k;
        vector<int> arr(n + 1);
        unordered_map<int, int> track;

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        favourite = arr[f];
        sort(arr.begin() + 1, arr.end(), greater<int>());

        for (i = 1; i <= k; i++)
        {
            if (arr[i] == favourite)
                del = 1;
        }

        for (; i <= n; i++)
        {
            if (arr[i] == favourite)
                not_del = 1;
        }

        if (del == 1 && not_del == 1)
        {
            cout << "MAYBE" << endl;
        }
        else if (del == 0 && not_del == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}