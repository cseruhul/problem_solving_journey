#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;

    int number;

    while (true)
    {
        cin >> number;

        if (number == -1)
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

    auto numb = find(l.begin(), l.end(), 2000);

    if (numb != l.end())
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}