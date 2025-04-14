#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int space = 0, i = 0;
        string answer;
        for (i = 0; i < s.size(); i++) {
            answer += s[i];
            //cout << s[i];
            if (s[i+1] == ' ') {
                space++;
            }
            if (space == k) {
                break;
            }
        }


        //for(auto item : answer){
            //cout << item ;
        //}
        //cout << ";check;";
        return answer;

    }
};

int main(){
    string s = "chopper is not a tanuki";
    int k = 5;
    Solution solN;

    solN.truncateSentence(s, k);
    return 0;
}
