#include <bits/stdc++.h>
using namespace std;

int main()
{
    string given_str, word;
    string name = "Jessica";
    int flag = 0;

    getline(cin, given_str);

    stringstream str_stream(given_str);

    while (str_stream >> word)
    {
        if (word == name)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}