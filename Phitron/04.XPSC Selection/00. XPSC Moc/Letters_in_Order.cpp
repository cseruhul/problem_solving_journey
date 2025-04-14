#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int n = word.size();
    set<char> letters_set;

    for (int i = 0; i < n; i++)
    {
        letters_set.insert(word[i]);
    }

    for (auto item : letters_set)
        cout << item;
    return 0;
}