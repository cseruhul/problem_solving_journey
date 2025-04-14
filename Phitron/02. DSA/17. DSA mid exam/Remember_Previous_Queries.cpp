#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    list<int> myList;

    while (Q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2 and v < myList.size())
        {
            auto it = myList.begin();
            for (int i = 0; i < v; i++)
            {
                it++;
            }

            myList.erase(it);
        }

        cout << "L -> ";
        for (auto it = myList.begin(); it != myList.end(); ++it)
        {
            cout << *(it) << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto it = myList.rbegin(); it != myList.rend(); ++it)
        {
            cout << *(it) << " ";
        }
        cout << endl;
    }

    return 0;
}