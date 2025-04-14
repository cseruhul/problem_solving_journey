#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        string word;
        int i, k = 0;
        for(i = 0; i < words.size(); i++){
            word = words[i];
            for(int j = 0; j < word.size(); j++){
                if(word[j] == x){
                    ans.push_back(i);
                    break;

                }
            }
        }

        for(i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
};

int main(){
    vector<string> words = {"leet","code"};
    char x = 'e';
    Solution sol;
    sol.findWordsContaining(words, x);
    return 0;
}
