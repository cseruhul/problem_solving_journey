#include <bits/stdc++.h>
using namespace std;

vector<int> running_Sum_of_Arrar(vector<int> &nums, int n)
{

    vector<int> ans(n);

    ans[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] + nums[i];
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ans = running_Sum_of_Arrar(arr, n);

    for (auto item : ans)
    {
        cout << item << " ";
    }

    return 0;
}