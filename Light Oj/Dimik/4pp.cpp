#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<int> v;

        for (int i = 1; i <= sqrt(n) + 1; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (i != n / i)
                    v.push_back(n / i);
            }
        }
        sort(v.begin(), v.end());

        cout << "Case " << i << ":";
        for (auto item : v)
            cout << " " << item;

        cout << endl;
    }

    return 0;
}