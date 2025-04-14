#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n, cow = 0, chicken = 0;
        cin >> n;

        cow = n / 4;
        n = n % 4;
        chicken = n / 2;

        cout << (cow + chicken) << endl;
    }
    
    return 0;
}