#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;

        if (s == "bca" || s == "cab")
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
