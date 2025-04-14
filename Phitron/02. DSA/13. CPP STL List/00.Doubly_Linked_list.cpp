#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> l(l2);

    l2.resize(20);
    // cout << l.size() << endl;
    // l.clear();

    for (auto item : l2)
        cout << item << " ";

    return 0;
}