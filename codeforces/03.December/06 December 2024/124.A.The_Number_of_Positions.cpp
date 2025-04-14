#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, position;
    cin >> n >> a >> b;

    position = n - max(a + 1, n - b) + 1;

    cout << position;
    return 0;
}