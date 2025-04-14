#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int countMatch = 0, n, i = 0;
        if(ruleKey == "type"){
            for(i = 0 ; i < items.size(); i++){
                if(items[i][0] == ruleValue)
                    countMatch++;
            }
        }else if(ruleKey == "color"){
            for(i = 0 ; i < items.size(); i++){
                if(items[i][1] == ruleValue)
                    countMatch++;
            }
        }
        else if(ruleKey == "name"){
            for(i = 0 ; i < items.size(); i++){
                if(items[i][2] == ruleValue)
                    countMatch++;
            }
        }
        return countMatch;
    }
};

int main(){
    vector<vector<string>>items{{"phone","blue","pixel"},{"computer","silver","phone"},{"phone","gold","iphone"}};

    Solution soll;

    soll.countMatches(items, "type", "phone");


    return 0;
}
