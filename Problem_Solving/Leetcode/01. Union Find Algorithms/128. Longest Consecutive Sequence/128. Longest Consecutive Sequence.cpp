#include<bits/stdc++.h>
using namespace std;

class Solution {
    unordered_map<int, int> ans;
    unordered_map<int, int> score;
    int answer = 0;

public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        if (n == 0)
            return 0;
        for (int i = 0; i < n; i++) {
            ans[nums.at(i)] = nums[i];
            score[nums.at(i)] = 1;
        }

        for (int i = 0; i < n; i++) {
            int p = nums.at(i);
            int q = p - 1;
            if (ans.find(q) != ans.end()) {
                Union(p, q);
            }
        }

        for (int i = 0; i < n; i++) {
            int p = nums.at(i);
            ans[p] = root(p);
        }

        unordered_map<int, int>::iterator itr;
        for (itr = score.begin(); itr != score.end(); itr++) {
            if (itr->second > answer)
                answer = itr->second;
        }

        return answer;
    }

private:
    void Union(int i, int j) {
        int p = root(i);
        int q = root(ans[j]);
        if (p != q) {

            if (score[p] < score[q]) {
                ans[q] = p;
                score[p] += score[q];
            } else {
                ans[p] = q;
                score[q] += score[p];
            }
        }
    }

private:
    int root(int i) {
        while (ans[i] != i) {
            ans[i] = ans[ans[i]];
            i = ans[i];
        }
        return i;
    }
};

int main(){
    //vector<int>nums{0,3,7,2,5,8,4,6,0,1};
    //vector<int>nums{100,4,200,1,3,2};
    vector<int>nums{0, 0, -1};

    Solution soln;

    cout << soln.longestConsecutive(nums);



    return 0;
}
