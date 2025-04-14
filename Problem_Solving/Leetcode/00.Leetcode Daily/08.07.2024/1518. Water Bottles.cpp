#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int f = numBottles, e = 0, a = 0;
        while(f){
            a = a + f;
            e = e + f;
            f = e / numExchange;
            e = e % numExchange;
        }
        return a;
    }
};

int main(){
    Solution ans;
    cout << ans.numWaterBottles(15, 8);
    return 0;
}
