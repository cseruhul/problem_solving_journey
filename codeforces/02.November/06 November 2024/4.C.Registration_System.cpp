#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string name;
    cin >> n;

    unordered_map<string, int> username;

    while (n--)
    {
        // fgets(name, 32, stdin);
        cin >> name;
        // cout << name << "\n";
        if (username.find(name) == username.end())
        {
            cout << "OK" << "\n";
            username[name] = 1;
        }
        else
        {
            // int i = 1;
            // while (1)
            // {
            //     name += to_string(i);
            //     i++;
            //     if (username.find(name) != username.end())
            //     {
            //         name.pop_back();
            //     }
            //     else
            //     {
            //         break;
            //     }
            // }
            cout << name << username[name] << "\n";
            username[name]++;
        }
    }

    return 0;
}