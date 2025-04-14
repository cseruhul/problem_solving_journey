#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    queue<string> counter_queue;
    cin >> q;

    while (q--)
    {
        int op;
        string name;
        cin >> op;

        if (op == 0)
        {
            cin >> name;
            counter_queue.push(name);
        }
        else if (op == 1)
        {
            if (counter_queue.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << counter_queue.front() << endl;
                counter_queue.pop();
            }
        }
    }

    return 0;
}
