#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence, word, search;
    int count = 0;

    getline(cin, sentence);

    cin >> search;

    // cout << search << " ";
    stringstream ss;

    ss << sentence;

    while (ss >> word)
    {
        if (word == search)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}