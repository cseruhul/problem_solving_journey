#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int>s_freq;
        unordered_map<char, int>t_freq;
        int i = 0;

        for(i; i < s.size(); i++){
            s_freq[s[i]]++;
            t_freq[t[i]]++;
        }

        for(i = 0; i < s_freq.size(); i++){
            if(s_freq[i] != t_freq[i])
                return false;
        }

        return true;
    }
};


int main(){
    Solution soln;
    string s = "carrace", t = "racecar";

    cout << soln.isAnagram(s, t) << endl;
    return 0;
}
