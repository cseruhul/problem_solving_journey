#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n, number = 0;
        n = s.length();
        for (int i = n - 1; i >= 0; i--) {
            if ((s[i + 1] == 'V' || s[i + 1] == 'X') && (s[i] == 'I')) {
                number -= 1;
            } else if ((s[i + 1] == 'C' || s[i + 1] == 'L') && (s[i] == 'X')) {
                number -= 10;
            } else if ((s[i + 1] == 'D' || s[i + 1] == 'M') && (s[i] == 'C')) {
                number -= 100;
            } else {

                switch (s[i]) {
                case 'I':
                    number += 1;
                    break;
                case 'V':
                    number += 5;
                    break;
                case 'X':
                    number += 10;
                    break;
                case 'L':
                    number += 50;
                    break;
                case 'C':
                    number += 100;
                    break;
                case 'D':
                    number += 500;
                    break;
                case 'M':
                    number += 1000;
                    break;
                }
            }
        }
        return number;
    }
};
int main(){
    string s = "MCMXCIV";
    Solution soln;

    cout << soln.romanToInt(s);
    return 0;
}
