#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int number;

    while (true)
    {
        cin >> number;

        if(number == -1)
        {
            break;
        }
        l.push_back(number);

    }
    

    for (auto item : l)
    {
        cout << item << " ";
    }
    cout << endl;

    cout << l.front() << endl;
    cout << l.back() << endl;

    return 0;
}