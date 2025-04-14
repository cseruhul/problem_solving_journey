#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input_str;

    while (getline(cin, input_str))
    {
        sort(input_str.begin(), input_str.end());

        for (auto ch : input_str)
        {
            if (ch >= 'a' and ch <= 'z')
                cout << ch;
        }
        cout << endl;
    }

    return 0;
}