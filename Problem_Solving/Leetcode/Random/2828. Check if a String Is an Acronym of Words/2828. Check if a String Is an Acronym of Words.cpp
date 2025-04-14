#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string newS="";
        for(auto item:words){
            newS += item[0];
        }

        return newS==s;
    }
};

int main(){
    Solution solObj;
    vector<string> words = {"a","b","c"};
    string s = "abcd";

    cout << solObj.isAcronym(words, s);
    return 0;
}
