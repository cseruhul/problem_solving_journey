#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ip_str;
    getline(cin, ip_str);

    for (char &ch : ip_str)
    {
        ch = std::tolower(ch);
    }

    int l = 0;
    int r = ip_str.size() - 1;

    while (l <= r)
    {
        swap(ip_str[l], ip_str[r]);
        l++;
        r--;
    }

    cout << ip_str;

    return 0;
}