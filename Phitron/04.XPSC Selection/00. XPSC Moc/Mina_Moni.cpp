#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, number, mina_sum = 0, moni_sum = 0;
        vector<int> foods;
        vector<int> mina;
        vector<int> moni;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> number;
            foods.push_back(number);
        }

        sort(foods.begin(), foods.end(), greater<int>());

        if (n % 2 == 0)
        {
            for (auto item : foods)
            {

                if ((mina.size() < n / 2) and (mina_sum < moni_sum))
                {
                    mina_sum += item;
                    mina.push_back(item);
                }
                else
                {
                    moni_sum += item;
                    moni.push_back(item);
                }
            }
            cout << abs(mina_sum - moni_sum) << endl;
        }
        else
        {
            for (auto item : foods)
            {
                if ((mina.size() < n / 2) and (mina_sum < moni_sum))
                {
                    mina_sum += item;
                    mina.push_back(item);
                }
                else if (moni.size() < n / 2)
                {
                    moni_sum += item;
                    moni.push_back(item);
                }
            }
            cout << abs(mina_sum - moni_sum) + foods[n - 1] << endl;
        }

        // cout << mina.size() << endl;
        // cout << moni.size() << endl;
    }

    return 0;
}