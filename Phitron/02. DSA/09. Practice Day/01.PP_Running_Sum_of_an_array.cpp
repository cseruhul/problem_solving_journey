#include <bits/stdc++.h>
using namespace std;

vector<int> running_sum(vector<int> nums, int n)
{
    vector<int> runningSum(n);
    runningSum[0] = nums[0];

    for (int i = 1; i < n; i++)
    {
        runningSum[i] = runningSum[i - 1] + nums[i];
    }

    return runningSum;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    vector<int> runningSum = running_sum(nums, n);

    cout << endl;

    for (auto item : runningSum)
        cout << item << " ";

    return 0;
}