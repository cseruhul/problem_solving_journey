#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        int point_per_problem = x / 10;

        cout << n * point_per_problem << endl;
    }

    return 0;
}