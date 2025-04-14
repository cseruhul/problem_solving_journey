#include <bits/stdc++.h>
using namespace std;

int stkSum(stack<int> stk)
{
    int sum = 0;
    while (!stk.empty())
    {
        sum += stk.top();
        stk.pop();
    }
    return sum;
}

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    int sum1 = stkSum(stk1);
    int sum2 = stkSum(stk2);
    int sum3 = stkSum(stk3);

    cout << sum1 << " " << sum2 << " " << sum3 << endl;
    while (!stk1.empty() and !stk2.empty() and !stk3.empty())
    {
        if ((sum1 == sum2) and (sum1 == sum3))
            return sum1;

        if (sum1 >= sum2 and sum1 >= sum3)
        {
            sum1 -= stk1.top();
            stk1.pop();
        }
        else if (sum2 >= sum1 and sum2 >= sum3)
        {
            sum2 -= stk2.top();
            stk2.pop();
        }
        else
        {
            sum3 -= stk3.top();
            stk3.pop();
        }
        cout << sum1 << " " << sum2 << " " << sum3 << endl;

        cout << endl;
    }

    return 0;
}
int main()
{
    stack<int> stk1, stk2, stk3;

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        stk1.push(n);
    }

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        stk2.push(n);
    }

    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
        {
            break;
        }
        stk3.push(n);
    }

    // while (!stk3.empty())
    // {
    //     cout << stk3.top() << endl;
    //     stk3.pop();
    // }

    int ans = maxSum(stk1, stk2, stk3);

    cout << ans << endl;

    return 0;
}