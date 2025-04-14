#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone;
        for(auto item:stones){
            stone.push(item);
        }
        while(stone.size() != 0){
            if(stone.size() == 1){
                return stone.top();
            }
            else{
                int y = stone.top();
                stone.pop();
                int x =stone.top();
                stone.pop();
                if(x != y)
                    stone.push(y - x);
            }
        }
        return 0;
    }
};

int main(){
    Solution soln;
    vector<int> stones{2,7,4,1,8,1};

    cout  << soln.lastStoneWeight(stones);
    return 0;
}
