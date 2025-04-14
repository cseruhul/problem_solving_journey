#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name, timur = "Timur";
    int t, n;
    sort(timur.begin(), timur.end());

    cin >> t;

    while (t--)
    {
        int flag = 1;
        cin >> n;
        cin >> name;

        sort(name.begin(), name.end());

        if (timur == name)
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