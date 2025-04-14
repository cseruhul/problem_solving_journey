#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i, X = 0;
        for(i = 0; i < operations.size(); i++){
            if(operations[i] == "--X" || operations[i] == "X--")
                X--;
            else if(operations[i] == "++X" || operations[i] == "X++")
                X++;
        }
        return X;
    }
};

int main(){
    vector<string> str = {"++X","++X","X++"};
    Solution soln;
    soln.finalValueAfterOperations(str);
    return 0;
}
