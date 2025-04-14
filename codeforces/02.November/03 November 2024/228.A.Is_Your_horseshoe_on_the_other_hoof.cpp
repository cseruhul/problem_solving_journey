#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    unordered_map<int, int> mp;

    mp[s1]++;
    mp[s2]++;
    mp[s3]++;
    mp[s4]++;

    cout << 4 - mp.size();

    return 0;
}
