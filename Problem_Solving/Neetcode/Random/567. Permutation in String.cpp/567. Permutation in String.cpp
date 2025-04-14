#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool permutationInString(string &s1, string &s2) {
        int i, j, count;
        unordered_map<char, int> map;
        for (i = 0; i < s1.length(); i++) {
            map[s1[i]]++;
        }
        count = map.size();
        i = 0;
        j = 0;
        while (j < s2.length()) {
            if (map.find(s2[j]) != map.end()) {
                map[s2[j]]--;
                if (map[s2[j]] == 0) {
                    count--;
                }
            }
            if (j - i + 1 == s1.length()) {
                if (count == 0) return true;
                if (map.find(s2[i]) != map.end()) {
                    if (map[s2[i]] == 0)
                        count++;
                    map[s2[i]]++;
                }
                i++;
            }
            j++;
        }

        return false;
    }
};

int main() {
    // string s1 = "ab", s2 = "eidbaooo";
    string s1, s2;
    Solution obj;
    ifstream input;
    input.open("input.txt");

    while (input.eof() == 0) {
        input >> s1 >> s2;
        cout << obj.permutationInString(s1, s2) << endl;
    }

    input.close();

    return 0;
}