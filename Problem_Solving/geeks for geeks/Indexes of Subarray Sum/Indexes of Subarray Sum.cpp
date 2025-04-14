#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        // code here
        vector<int> answer;
        unordered_map<long long, long long> ans;
        for(auto item:arr)
            ans[item]++;
        unordered_map<long long, long long> ::iterator itr;
        for(itr = ans.begin(); itr != ans.end(); itr++){
            if(itr->second > 1)
                answer.push_back(itr->first);
        }
        if(answer.begin() != answer.end()){
            sort(answer.begin(), answer.end());
            return answer;
        }
        else{
            return {-1};
        }
    }
};
int main(){
    vector<long long> arr{4, 3, 1, 2, 6, 7};
    vector<int> answer;
    Solution soln;

    answer = soln.duplicates(arr);
    for(auto item : answer)
        cout << item << " ";
    return 0;
}
