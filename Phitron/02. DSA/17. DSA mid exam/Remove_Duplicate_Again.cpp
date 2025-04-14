#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;

    list<int> linkedList;

    while (true)
    {
        cin >> number;

        if (number == -1)
            break;

        linkedList.push_back(number);
    }

    linkedList.sort();
    linkedList.unique();

    for (auto it = linkedList.begin(); it != linkedList.end(); ++it)
    {
        cout << *(it) << " ";
    }

    return 0;
}
