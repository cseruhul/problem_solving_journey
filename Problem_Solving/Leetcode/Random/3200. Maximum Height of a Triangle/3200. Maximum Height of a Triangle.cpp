#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculation(int r, int b){
        int counter = 0, i, n = (r > b)?r:b;
        for(i = 1; i <= n; i++){
            if((i % 2 == 1) && (r >= i)){
                r = r - i;
                counter++;
            }else if((i % 2 == 0) && (b >= i)){
                b = b - i;
                counter++;
            }
            else
            {
                break;
            }
        }

        return counter;

    }
    int maxHeightOfTriangle(int red, int blue) {
        int result1 = calculation(red, blue);
        int result2 = calculation(blue, red);

        return (result1 > result2)? result1 : result2;
    }
};

int main(){
    int red, blue;
    red = 1;
    blue = 1;

    Solution soln;

    cout << soln.maxHeightOfTriangle(red, blue);
    return 0;
}
