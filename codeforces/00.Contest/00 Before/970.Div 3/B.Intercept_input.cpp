#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k;

    cin >> t;

    while (t--)
    {
        cin >> k;
        int arr[k];
        int n = k - 2, m = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        unordered_set<int> map;
        for (int i = 0; i < k; i++)
        {
            if (n % arr[i] == 0)
            {
                int temp = n / arr[i];
                if (map.find(arr[i]) != map.end())
                {
                    cout << temp << " " << arr[i];
                    break;
                }
                map.insert(temp);
            }
        }
        cout << endl;
        map.clear();
    }

    return 0;
}