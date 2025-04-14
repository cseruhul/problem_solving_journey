#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, num;
        cin >> n;

        vector<int> s1(n), s2(n);

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            s1[i] = num;
            s2[i] = num;
        }

        sort(s2.begin(), s2.end(), greater<>());

        for (auto item : s1)
            if (item == s2[0])
                cout << item - s2[1] << " ";
            else
                cout << item - s2[0] << " ";

        cout
            << endl;
    }

    return 0;
}