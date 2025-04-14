#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, number, c_sum = 0, m_sum = 0;
        vector<int> foods;
        vector<int> chinki;
        vector<int> minki;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> number;
            foods.push_back(number);
        }

        sort(foods.begin(), foods.end(), greater<int>());

        for (auto item : foods)
        {
            if (chinki.size() < n / 2 and c_sum < m_sum)
            {
                c_sum += item;
                chinki.push_back(item);
            }
            else
            {
                m_sum += item;
                minki.push_back(item);
            }
        }
        // cout << chinki.size() << endl;
        // cout << minki.size() << endl;

        cout << abs(c_sum - m_sum) << endl;
        // cout << endl;
    }

    return 0;
}