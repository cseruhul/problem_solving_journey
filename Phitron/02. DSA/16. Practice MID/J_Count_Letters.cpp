#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    vector<int> frequency(27);

    for (int i = 0; i < str.size(); i++)
    {
        frequency[str[i] - 'a']++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (frequency[i])
            cout << (char)(i + 'a') << " : " << frequency[i] << endl;
    }

    return 0;
}