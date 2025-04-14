#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string word;
        cin >> word;

        word.pop_back();
        word.pop_back();

        word.push_back('i');

        cout << word << endl;
    }

    return 0;
}