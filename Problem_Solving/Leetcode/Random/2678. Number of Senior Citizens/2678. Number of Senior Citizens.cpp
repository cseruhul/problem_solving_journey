#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSeniors(vector<string> &details) {
        int count = 0, age;
        for (auto item : details) {
            age = 0;
            age = (item[11] - '0') * 10 + (item[12] - '0');
            if (age > 60) count++;
        }
        return count;
    }
};

int main() {
    // vector<string> details{"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    vector<string> details{"1313579440F2036", "2921522980M5644"};
    Solution obj;

    cout << obj.countSeniors(details);

    return 0;
}