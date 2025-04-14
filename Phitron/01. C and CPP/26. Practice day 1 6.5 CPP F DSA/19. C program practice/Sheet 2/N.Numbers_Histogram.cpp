#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int n, num;

    cin >> ch;
    cin >> n;

    while (n--)
    {
        cin >> num;

        for (int i = 0; i < num; i++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}