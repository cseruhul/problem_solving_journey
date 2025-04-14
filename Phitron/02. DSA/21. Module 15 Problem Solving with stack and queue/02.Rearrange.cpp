#include <bits/stdc++.h>
using namespace std;

class Number
{
public:
    int a;
    int b;
};

vector<int> rearrangeArray(vector<int> &A, int m)
{
    vector<int> ans;
    int i = 0, n = A.size();
    Number obj[n];

    for (auto item : A)
    {
        obj[i].a = abs(item - m);
        obj[i].b = item;
        i++;
    }

    for (int i = 1; i < n; i++)
    {
        Number key = obj[i];
        int j = i - 1;
        while (j >= 0 and key.a < obj[j].a)
        {
            obj[j + 1] = obj[j];
            --j;
        }
        obj[j + 1] = key;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (obj[i].a > obj[j].a)
    //         {
    //             swap(obj[i], obj[j]);
    //         }
    //     }
    // }

    for (auto item : obj)
    {
        ans.push_back(item.b);
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        vector<int> ans = rearrangeArray(A, m);

        for (auto item : ans)
        {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}