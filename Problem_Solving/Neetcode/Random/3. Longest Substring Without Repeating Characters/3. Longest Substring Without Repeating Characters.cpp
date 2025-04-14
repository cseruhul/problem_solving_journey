#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int withoutRepeatingChar(string &s) {
        int max = 0;
        unordered_map<char, int> map;
        int i = 0, j = 0, n;
        n = s.length();

        while (j < n) {
            map[s[j]]++;
            if (map.size() == j - i + 1) {
                max = (max > j - i + 1) ? max : j - i + 1;
                j++;
            } else if (map.size() < j - i + 1) {
                while (map.size() < j - i + 1) {
                    map[s[i]]--;
                    if (map[s[i]] == 0) {
                        map.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }

        return max;
    }
};

int main() {
    string str;
    Solution obj;
    ifstream input;
    input.open("input.txt");
    while (input.eof() == 0) {
        getline(input, str);
        cout << obj.withoutRepeatingChar(str) << endl;
    }
    return 0;
}