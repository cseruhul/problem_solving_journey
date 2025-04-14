#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isPalindrome(int x){
    int rev = 0;
        if ((x < 0) || (x != 0 && x % 10 == 0)) {
            return false;
        } else {
            while (x > rev) {
                rev = 10 * rev + x % 10;
                x = x / 10;

                /*if (rev == x || rev / 10 == x) {
                    return true;
                }*/
            }
            return (rev == x ) || (rev / 10 == x);
        }
    }
};

int main(){

    Solution sol;
    int n = 20;
    if(sol.isPalindrome(n)){
        cout << n << " is Palindrome." << endl;
    }else{
        cout << n << " is not Palindrome." << endl;
    }


    return 0;
}
