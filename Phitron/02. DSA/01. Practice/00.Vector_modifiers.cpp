#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        // cin >> v[i];
        int number;
        cin >> number;

        v.push_back(number);
    }

    for (auto item : v)
    {
        cout << item << " ";
    }

    return 0;
}