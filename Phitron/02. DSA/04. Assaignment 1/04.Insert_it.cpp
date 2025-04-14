#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> brr(m);

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    cin >> x;

    for (int i = 0; i < m; i++)
    {
        arr.insert(arr.begin() + x + i, brr[i]);
    }

    for (auto item : arr)
    {
        cout << item << " ";
    }

    return 0;
}