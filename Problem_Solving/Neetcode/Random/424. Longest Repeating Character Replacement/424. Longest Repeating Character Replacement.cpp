#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int longestRepeatingChar(string &str, int k) {
        int result = 0;
        unordered_map<char, int> map;
        int i = 0, j = 0, n, freq_count = 0;
        n = str.length();

        while (j < n) {
            map[str[j]]++;
            freq_count = (freq_count > map[str[j]]) ? freq_count : map[str[j]];
            if (j - i + 1 - freq_count > k) {
                while (j - i + 1 - freq_count > k) {
                    map[str[i]]--;
                    i++;
                }
            }
            result = (result > j - i + 1) ? result : j - i + 1;
            j++;
        }

        return result;
    }
};

int main() {
    string str;
    ifstream input;
    input.open("input.txt");
    Solution obj;
    int k;
    k = 2;

    while (input.eof() == 0) {
        input >> str >> k;
        cout << obj.longestRepeatingChar(str, k) << endl;
    }

    input.close();
    return 0;
}