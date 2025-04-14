#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, rs;
    cin >> s;
    rs = s;
    reverse(rs.begin(), rs.end());

    if (s == rs)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}