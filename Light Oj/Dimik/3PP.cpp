#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1000;

    for (int i = n; i >= 1; i--)
    {
        cout << i << "\t";
        if ((i - 1) % 5 == 0)
            cout << endl;
    }

    return 0;
}