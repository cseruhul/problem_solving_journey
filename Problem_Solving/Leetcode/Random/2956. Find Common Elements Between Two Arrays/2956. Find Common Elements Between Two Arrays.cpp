#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findIntersectionValues(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans{0, 0};
        int counts;
        for (auto item : nums1)
        {
            counts = 0;
            counts = count(nums2.begin(), nums2.end(), item);
            //cout << item <<". =" << counts << endl;
            if(counts > 0)
                ans[0]++;
        }
        for (auto item : nums2)
        {
            counts = 0;
            counts = count(nums1.begin(), nums1.end(), item);
            //cout << item <<". =" << counts << endl;
            if(counts > 0)
                ans[1]++;
        }
        return ans;
        /*
        for(int i = 0; i < 2; i++){
            printf("%d, ", ans[i]);
        }

        */

    }
};

int main()
{
    vector<int> num1 = {3,4,2,3};
    vector<int> num2 = {1,5};
    vector<int> ans;

    Solution soln;
    ans = soln.findIntersectionValues(num1, num2);

    for (auto item : ans)
    {
        cout << item << " ";
    }

    return 0;
}
