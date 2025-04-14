#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (1)
    {
        int a = s.find("EGYPT");
        if (a == -1)
            break;
        s.replace(a, 5, " ");
    }
    // int a = s.find("aaa");
    cout << s;
    return 0;
}