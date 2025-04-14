#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to find equilibrium point in the array.
    // arr: input array
    // n: size of array
    int equilibriumPoint(long long arr[], int n) {

        // Your code here
        long long leftSum[n], rightSum[n];
        int i;
        leftSum[0] = rightSum[n - 1] = 0;
        for(i = 1; i < n; i++){
            leftSum[i] = leftSum[i - 1] + arr[i - 1];
            //cout << leftSum[i-1] << " ";
        }
            //cout << leftSum[n-1] << endl;

            //cout << rightSum[n-1] << endl;
        for(i = n - 2; i >= 0; i--){
            rightSum[i] = rightSum[i + 1] + arr[i + 1];
            //cout << rightSum[i] << " ";
        }

        for(i = 1; i <= n; i++){
            if(rightSum[i-1] - leftSum[i-1] == 0){
                return i;
            }

        }

        return -1;

    }
};

int main(){
    long long arr[] =  {3, 4, 5, 7};
    long long n = sizeof(arr) / sizeof(arr[0]);

    Solution soln;

    soln.equilibriumPoint(arr, n);

    return 0;
}
