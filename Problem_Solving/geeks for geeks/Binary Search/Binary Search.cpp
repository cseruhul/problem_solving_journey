#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l, r, mid;
        l = 0;
        r = n - 1;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(arr[mid] == k){
                return mid;
            }
            if(arr[mid] < k){
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        return -1;

    }
};

int main(){
    int arr[] = {11,22,33,44,55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    Solution objsol;

    cout << objsol.binarysearch(arr, n, k);

    return 0;
}
