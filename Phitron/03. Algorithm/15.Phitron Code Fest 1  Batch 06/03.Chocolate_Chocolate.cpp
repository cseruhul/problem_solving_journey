#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, chocolate = 0, wrapper = 0;
        cin >> n;

        chocolate = n / 5;
        wrapper = chocolate;

        while (wrapper >= 3)
        {
            chocolate += wrapper / 3;
            wrapper = wrapper / 3 + wrapper % 3;
        }

        cout << chocolate << endl;
    }

    return 0;
}