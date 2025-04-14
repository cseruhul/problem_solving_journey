/*
https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&sortBy=submissions

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        int i, sum1 = 0, sum2 = 0;

        //Sum of the numbers from 1 to n;
        sum1 = n * (n + 1) / 2;


        //Sum of the given numbers in the array
        for(i = 0; i < arr.size(); i++){
            sum2 += arr[i];
        }

        return sum1 - sum2;

    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> arr[i];
        Solution obj;
        cout << obj.missingNumber(n, arr) << "\n";
    }
    return 0;
}
