#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        cout << "Sum = " << ((s[0] - '0') + (s[4] - '0')) << endl;
    }
    return 0;
}