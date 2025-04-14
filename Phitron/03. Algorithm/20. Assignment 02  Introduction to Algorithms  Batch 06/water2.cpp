#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, height;
        cin >> n;
        priority_queue<pair<int, int>> pq;

        for (int i = 0; i < n; i++)
        {
            cin >> height;

            pq.push({height, i});
        }

        int l_s = pq.top().second;
        pq.pop();
        int r_s = pq.top().second;

        if (l_s < r_s)
            cout << l_s << " " << r_s << endl;
        else
            cout << r_s << " " << l_s << endl;
    }

    return 0;
}