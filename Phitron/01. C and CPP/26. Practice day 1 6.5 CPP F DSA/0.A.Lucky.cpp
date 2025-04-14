#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string inpt;

    cin >> t;

    while (t--)
    {
        cin >> inpt;
        int l = 0, r = 5, l_sum = 0, r_sum = 0;
        while (l < r)
        {
            l_sum += inpt[l] - '0';
            r_sum += inpt[r] - '0';
            l++;
            r--;
        }
        if (l_sum == r_sum)
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