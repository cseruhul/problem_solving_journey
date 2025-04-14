#include <bits/stdc++.h>
using namespace std;

class Bottle_Brand
{
public:
    int b, c;
};

int main()
{
    int t, n, k;

    map<int, int> selves;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        Bottle_Brand bottle[k];
        selves.clear();

        for (int i = 0; i < k; i++)
        {
            cin >> bottle[i].b >> bottle[i].c;
        }

        for (int i = 0; i < k - 1; i++)
        {
            for (int j = 0; j < k - i - 1; j++)
            {
                if (bottle[j].c < bottle[j + 1].c)
                {
                    swap(bottle[j], bottle[j + 1]);
                }
            }
        }

        for (int i = 0; i < k; i++)
        {
            selves[bottle[i].b] += bottle[i].c;
        }

        map<int, int>::iterator itr;
        int i = 0, sum = 0;
        for (itr = selves.begin(); itr != selves.end(); itr++)
        {
            if (i >= n)
            {
                break;
            }
            else
            {
                sum += itr->second;
            }
            i++;
        }

        cout << sum << endl;
    }

    return 0;
}