#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    vector<int> ans(n);
    for (auto item : arr)
    {
        if (s.empty())
        {
            s.push(item);
        }
        else
        {
            if (s.top() >= item)
            {
                s.pop();
            }
            s.push(item);
        }
    }
    // cout << "\nValue of N: " << n << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        // cout << "i = " << i << endl;
        if (s.top() < arr[i])
        {
            // cout << s.top() << endl;
            ans[i] = s.top();
        }
        else if (s.top() > arr[i])
        {
            // cout << s.top() << endl;
            s.pop();
            ans[i] = -1;
        }
        else
        {
            // cout << s.top() << endl;
            ans[i] = -1;
        }
    }

    // for (auto item : ans)
    //     cout << item << " ";

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << " ";
        // }

        vector<int> ans = nextSmallerElement(v, n);

        for (auto item : ans)
            cout << item << " ";

        cout << endl;
    }

    return 0;
}