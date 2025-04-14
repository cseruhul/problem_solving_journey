#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30};
    vector<int> v = {1, 2, 3, 4};

    for (auto item : l)
    {
        cout << item << " ";
    }
    cout << endl;

    l.insert(next(l.begin(), 2), v.begin(), v.end());

    for (auto item : l)
    {
        cout << item << " ";
    }

    return 0;
}