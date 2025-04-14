#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, length = INT_MIN, i, j;
    cin >> n;

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (i = 0, j = 1; j < n; j++)
    {
        if (num[j] <= num[j - 1])
        {
            length = max(length, j - i);
            i = j;
        }
    }
    length = max(length, j - i);

    cout << length;
    return 0;
}