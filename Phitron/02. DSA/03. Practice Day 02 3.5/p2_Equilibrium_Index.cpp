#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = -1;
    cin >> n;

    vector<int> nums(n);
    vector<int> left(n);
    vector<int> right(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    left[0] = nums[0];
    right[n - 1] = nums[n - 1];
    cout << "Left sum: ";
    for (int i = 1; i < n; i++)
    {
        left[i] = left[i - 1] + nums[i];
    }

    for (int element : left)
        cout << element << " ";
    cout << "\nRight sum: ";

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = right[i + 1] + nums[i];
    }

    for (int element : right)
        cout << element << " ";
    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        if (left[i] == right[i])
        {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}

/*
-7 -6 -1 1 -3 0 0 
7 -7 0
6 -6 1
1 -1 2
-1 1 3
3 -3 4
0 0 5
5

*/