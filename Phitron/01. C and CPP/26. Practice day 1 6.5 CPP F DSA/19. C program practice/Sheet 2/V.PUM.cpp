#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1, j = 1; i <= n; i++)
    {
        for (int k = 1; k <= 4; k++)
        {
            if (j % 4 == 0)
                cout << "PUM";
            else
                cout << j << " ";
            j++;
        }
        cout << endl;
    }
    return 0;
}