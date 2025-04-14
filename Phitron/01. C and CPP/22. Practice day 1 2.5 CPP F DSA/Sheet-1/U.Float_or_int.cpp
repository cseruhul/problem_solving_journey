#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n;
    cin >> n;

    if (floor(n) == ceil(n))
    {
        cout << "int " << floor(n);
    }
    else
    {
        cout << "float " << floor(n) << " " << n - int(n);
    }
    return 0;
}