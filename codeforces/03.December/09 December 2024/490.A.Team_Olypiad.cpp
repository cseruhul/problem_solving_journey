#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> one;
    vector<int> two;
    vector<int> three;

    for (int i = 1; i <= n; i++)
    {
        int num;
        cin >> num;

        if (num == 1)
        {
            one.push_back(i);
        }
        else if (num == 2)
        {
            two.push_back(i);
        }
        else if (num == 3)
        {
            three.push_back(i);
        }
    }

    int w = min({one.size(), two.size(), three.size()});

    cout << w << endl;

    for (int i = 0; i < w; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << endl;
    }
    return 0;
}