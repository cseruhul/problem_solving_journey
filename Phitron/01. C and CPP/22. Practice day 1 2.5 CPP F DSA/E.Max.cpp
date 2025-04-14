#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, number, max_num = INT_MIN;
    cin >> n;

    while (n--)
    {
        cin >> number;
        max_num = max(number, max_num);
    }

    cout << max_num;

    return 0;
}