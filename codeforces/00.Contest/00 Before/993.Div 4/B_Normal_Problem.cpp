#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a;

        int n = a.size();

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 'p')
            {
                b.push_back('q');
            }
            else if (a[i] == 'q')
            {
                b.push_back('p');
            }
            else{
                b.push_back(a[i]);
            }
        }

        cout << b << endl;
    }
    return 0;
}