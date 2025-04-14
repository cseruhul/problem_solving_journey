#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    cout << a << "\n"
         << s << "\n"
         << b << endl;
    if (s == '>')
    { // greater
        if (a > b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    else if (s == '<')
    { // less
        if (a < b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    else
    { // equals
        if (a == b)
        {
            cout << "Right\n";
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    return 0;
}
