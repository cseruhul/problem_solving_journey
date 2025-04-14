#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int print2largest(int arr[], int n) {
        int i, first, second;
        first = second = INT_MIN;

        for(i = 0; i < n; i++){
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] != first){
                second = arr[i];
            }
        }
        if(second == INT_MIN)
            return -1;
        else
            return second;

    }
};

int main(){
    int arr[] =  {12, 12, 12, 12, 12, 12};

    int n = sizeof(arr) / sizeof(arr[0]);
    Solution obj;
    cout << obj.print2largest(arr, n);

    return 0;
}
