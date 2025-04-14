#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    int arr[n + 1];

    unordered_set<int> dist_num;

    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (i = n; i > 0; i--)
    {
        dist_num.insert(arr[i]);
        arr[i] = dist_num.size();
    }

    while (m--)
    {
        int num;
        cin >> num;
        cout << arr[num] << endl;
    }

    return 0;
}