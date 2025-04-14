#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    cout << "1";

    for (int i = 2; i <= n; i++)
    {
        cout << " " << i;
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}