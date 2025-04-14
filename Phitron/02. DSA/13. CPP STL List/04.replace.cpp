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

    replace(l.begin(), l.end(), 20, 500);

    for (auto item : l)
    {
        cout << item << " ";
    }
    cout << endl;



    return 0;
}